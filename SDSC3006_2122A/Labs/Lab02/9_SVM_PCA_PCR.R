## Support Vector Machine
library(e1071)
# Generate data
set.seed(1)
x <- matrix(rnorm(200 * 2), ncol=2)
x[1:100,] <- x[1:100,] + 2
x[101:150,] <- x[101:150,] - 2
y <- c(rep(1, 150), rep(2, 50))
dat <- data.frame(x=x, y=as.factor(y))
plot(x, col=y)
# Use SVM with a radial kernel
train <- sample(200, 100)
svmfit <- svm(y~., data=dat[train,], kernel="radial", gamma=1, cost=1)
plot(svmfit, dat[train,])
summary(svmfit)
# Select best values for "gamma" and "cost"
set.seed(1)
tune.out <- tune(svm, y~., data=dat[train,], kernel="radial", 
                 ranges=list(cost=c(0.1, 1, 10, 100, 1000),
                             gamma=c(0.5, 1, 2, 3, 4)))
summary(tune.out)
table(true=dat[-train, "y"], 
      pred=predict(tune.out$best.model, newdata=dat[-train,]))
## Principal Components Analysis
# USArrests data set in base R package
states <- row.names(USArrests)
states
names(USArrests)
apply(USArrests, 2, mean)
apply(USArrests, 2, var)
# Fit pca with standardized variables
pr.out <- prcomp(USArrests, scale=TRUE)
names(pr.out)
pr.out$center # mean
pr.out$scale # standard deviation
pr.out$rotation # principal component loading each column
# In general, min(n - 1, p) informative principal components in a data set with
# n observations and p variables
dim(pr.out$x) # principal component score vectors
summary(pr.out)
# Plot the first two principal components
biplot(pr.out, scale=0)
## Principal Components Regressions
# pcr() function in pls libarays
#install.packages("pls")
library(pls)
# Hitters data set: predict a baseball player's Salary based on various statistics
# associated with performance in the previous year
library(ISLR2)
# Remove rows with missing values in any variable
Hitters <- na.omit(Hitters)
x <- model.matrix(Salary~., Hitters)[,-1] # x: 19 predictors
y <- Hitters$Salary
# Fit PCR
set.seed(2)
pcr.fit <- pcr(Salary~., data=Hitters, scale=TRUE, validation="CV")
summary(pcr.fit)
# Plot the cv scores
validationplot(pcr.fit, val.type="MSEP")
# Split the data into a training and a test set
set.seed(1)
train <- sample(1:nrow(x), nrow(x) / 2)
test <- (-train)
y.test <- y[test]
# Perform PCR on the training data
set.seed(1)
pcr.fit <- pcr(Salary~., data=Hitters, subset=train, scale=TRUE, validation="CV")
validationplot(pcr.fit, val.type="MSEP")
# Compute test MSE
pcr.pred <- predict(pcr.fit, x[test,], ncomp=5)
mean((pcr.pred - y.test)^2)
# Perform PCR with ncomp=5 on full data set
pcr.fit <- pcr(y~x, scale=TRUE, ncomp=5)
summary(pcr.fit)

