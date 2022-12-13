# Hitters data set: predict a baseball player's Salary based on various statistics
# associated with performance in the previous year
library(ISLR2)
library(leaps)
# Remove rows with missing values in any variable
Hitters <- na.omit(Hitters)
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
## Ridge Regression: Fitting
# The function glmnet() in the glmnet package install.packages("glmnet")
library(glmnet)
# The package invokes inputs and outputs separately unlike lm() and glm()
x <- model.matrix(Salary~., Hitters)[,-1] # x: 19 predictors
y <- Hitters$Salary
# Why remove the 1st column?
# Consider a vector of lambda values ranging from 10^10 to 0.01
grid <- 10^seq(10, -2, length=100)
ridge.mod <- glmnet(x, y, alpha=0, lambda=grid) # alpha=1: LASSO
dim(coef(ridge.mod))
## Ridge Regression: Check Results
# First, the 50th value of lambda and the coefficient estimates resulted from that value
ridge.mod$lambda[50]
coef(ridge.mod)[,50]
# The sum of squares of those estimates
sqrt(sum(coef(ridge.mod)[-1,50]^2)) # Why remove 1st row?
# Next, the 60th value of lambda
ridge.mod$lambda[60]
coef(ridge.mod)[,60]
sqrt(sum(coef(ridge.mod)[-1,60]^2))
# Prediction of the coefficients for new value of lambda, e.g., lambda=50
predict(ridge.mod, s=50, type="coefficients")[1:20,]
## Ridge Regression: Estimate Test MSE
# Split the data into a training and a test set
set.seed(1)
train <- sample(1:nrow(x), nrow(x) / 2)
test <- (-train)
y.test <- y[test]
# Fit ridge regression on training data
ridge.mod <- glmnet(x[train,], y[train], alpha=0, lambda=grid, thresh=1e-12)
# Predict on test set using lambda=4
ridge.pred <- predict(ridge.mod, s=4, newx=x[test,])
mean((ridge.pred - y.test)^2) # test MSE
## Ridge Regression: Select Tuning Parameter
# Cross validation to get the best lambda, cv.glmnet()
set.seed(1)
cv.out <- cv.glmnet(x[train,], y[train], alpha=0)
plot(cv.out)
bestlam <- cv.out$lambda.min
bestlam
# Now predict with the best lambda
ridge.pred <- predict(ridge.mod, s=bestlam, newx=x[test,])
mean((ridge.pred - y.test)^2)
# Refit ridge regression on the full data set
out <- glmnet(x, y, alpha=0)
predict(out, type="coefficients", s=bestlam)[1:20,]
## LASSO
# Only difference in model building is to use alpha=1
lasso.mod <- glmnet(x[train,], y[train], alpha=1, lambda=grid)
plot(lasso.mod)
# Use CV to find the optimal lambda
set.seed(1)
cv.out <- cv.glmnet(x[train,], y[train], alpha=1)
plot(cv.out)
bestlam <- cv.out$lambda.min
# Use best lambda for prediction
lasso.pred <- predict(lasso.mod, s=bestlam, newx=x[test,])
mean((lasso.pred - y.test)^2)
out <- glmnet(x, y, alpha=1, lambda=grid)
lasso.coef <- predict(out,  type="coefficients", s=bestlam)[1:20,]
# Check the estimated coefficients
lasso.coef
lasso.coef[lasso.coef!=0]

