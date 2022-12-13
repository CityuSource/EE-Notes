## Bootstrap
# 1. Create a function that computes the statistic (i.e., estimate).
# 2. Use the boot() function in the boot library to perform the bootstrap by 
# repeatedly sampling observations from the data set with replacement
# Portfolio data set in the ISLR2 package
library(ISLR2)
names(Portfolio)
dim(Portfolio)
attach(Portfolio)
# Create a function to calculate alpha
alpha.fn <- function(data, index){
  X <- data$X[index]
  Y <- data$Y[index]
  (var(Y) - cov(X, Y)) / (var(X) + var(Y) - 2 * cov(X, Y)) # alpha
}
# Estimate alpha using all 100 observations
alpha.fn(Portfolio, 1:100)
# Randomly select 100 observations from the data set with replacement
set.seed (7)
alpha.fn(Portfolio, sample(100, 100, replace=T))
# Estimates based on 1000 bootstrap samples
boot(Portfolio, alpha.fn, R=1000)
## Subset Selection Methods
# Hitters data set: predict a baseball player's Salary based on various statistics
# associated with performance in the previous year
View(Hitters)
names(Hitters)
dim(Hitters)
sum(is.na(Hitters$Salary)) # total number of missing salary ("NA")
# Remove rows with missing values in any variable
Hitters <- na.omit(Hitters)
dim(Hitters)
sum(is.na(Hitters))
## Best Subset Selection
#install.packages("leaps")
library(leaps)
regfit.full <- regsubsets(Salary~., data=Hitters)
# Print the best set of predictors for each model size
# by default, only return results up to the best 8 predictor model
summary(regfit.full)
# To return as many predictors as specified
regfit.full <- regsubsets(Salary~., data=Hitters, nvmax=19)
reg.summary <- summary(regfit.full)
names(reg.summary)
reg.summary$rsq
# Find the best model according to each criteria
par(mfrow=c(2, 2))
# Figure 1
plot(reg.summary$rss, xlab="Number of Variables", ylab="RSS", type="l")
# Figure 2
plot(reg.summary$adjr2, xlab="Number of Variables", ylab="Adjusted RSq", type="l")
which.max(reg.summary$adjr2)
points(11, reg.summary$adjr2[11], col="red", cex=2, pch=20)
# Figure 3
plot(reg.summary$cp, xlab="Number of Variables", ylab="Cp", type="l")
which.min(reg.summary$cp)
points(10, reg.summary$cp[10], col="red", cex=2, pch=20)
# Figure 4
which.min(reg.summary$bic)
plot(reg.summary$bic, xlab="Number of Variables", ylab="BIC", type="l")
points(6, reg.summary$bic[6], col="red", cex=2, pch=20)
# Print the coefficient estimates of the 6 predictor model
coef(regfit.full, 6)
## Stepwise Selection
regfit.fwd <- regsubsets(Salary~., data=Hitters, nvmax=19, method="forward")
summary(regfit.fwd)
regfit.bwd <- regsubsets(Salary~., data=Hitters, nvmax=19, method="backward")
summary(regfit.bwd)
# Print the coefficient estimates of the 7 predictor model
coef(regfit.full, 7)
coef(regfit.fwd, 7)
coef(regfit.bwd, 7)
## Validation Set Approach for Model Selection
# Randomly split data into a training set and a test set
set.seed(1)
train <- sample(c(TRUE, FALSE), nrow(Hitters), replace=TRUE)
test <- (!train)
# Perform best subset selection
regfit.best <- regsubsets(Salary~., data=Hitters[train,], nvmax=19)
# Building an "X" matrix from test data
test.mat <- model.matrix(Salary~., data=Hitters[test,])
# Compute test MSE of the 19 models
val.errors <- rep(NA, 19)
for (i in 1:19) {
  coefi <- coef(regfit.best, id=i)
  pred <- test.mat[,names(coefi)] %*% coefi
  val.errors[i] <- mean((Hitters$Salary[test] - pred)^2)
}
val.errors
# Find the best model
which.min(val.errors)
coef(regfit.best, 7)
# After finding the best model, we need to fit this model using the full data set
# to obtain more accurate coefficient estimates
regfit.best <- regsubsets(Salary ~ ., data=Hitters, nvmax=19)
coef(regfit.best, 7)
## Cross Validation for Model Selection
# Computing predictions was a little tedious, partly because there is no predict()
# method for regsubsets(). The following codes create a function for prediction
predict.regsubsets <- function(object, newdata, id, ...) {
  form <- as.formula(object$call[[2]])
  mat <- model.matrix(form, newdata)
  coefi <- coef(object, id=id)
  xvars <- names(coefi)
  mat[,xvars] %*% coefi
}
# Note: need to perform best subset selection in each fold
#       need to compute test error for each model in each fold
k <- 10
n <- nrow(Hitters)
set.seed(1)
folds <- sample(rep(1:k, length=n))
cv.errors <- matrix(NA, k, 19, dimnames=list(NULL, paste(1:19)))
for (j in 1:k) {
  best.fit <- regsubsets(Salary~., data=Hitters[folds!=j,], nvmax=19)
  for (i in 1:19) {
    pred <- predict(best.fit, Hitters[folds==j,], id=i)
    cv.errors[j,i] <- mean((Hitters$Salary[folds==j] - pred)^2)
  }
}
cv.errors
mean.cv.errors <- apply(cv.errors, 2, mean) # average errors over folds
mean.cv.errors
par(mfrow = c(1, 1))
plot(mean.cv.errors, type="b") # CV selects the 11 variable model
# Find coefficient estimates of the selected model using all data
reg.best <- regsubsets(Salary~., data=Hitters, nvmax=19)
coef(reg.best, 10)

