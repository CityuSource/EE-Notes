# Boston data set in the ISLR2/MASS library: predict medv (median home price) of 
# a neighborhood based on various predictors (totally 13 predictors)
# Prepare training and test data
library(ISLR2)
set.seed(1)
train <- sample(1:nrow(Boston), nrow(Boston)/2)
boston.test <- Boston[-train, "medv"]
## Boosting
# Use gbm() function in gbm package to fit boosted regression trees to the Boston data
#install.packages("gbm")
library(gbm)
set.seed(1)
boost.boston <- gbm(medv~., data=Boston[train,], distribution="gaussian", 
                    n.trees=5000, interaction.depth=4)
# regression: distribution="gaussian"
# classification: distribution="bernoulli"
summary(boost.boston) # relative influence plot
plot(boost.boston, i="rm") # partial dependence plot
plot(boost.boston, i="lstat")
yhat.boost <- predict(boost.boston, newdata=Boston[-train,], n.trees=5000)
mean((yhat.boost - boston.test)^2)
# Change value of the shrinkage parameter lambda
boost.boston <- gbm(medv~., data=Boston[train,], distribution="gaussian", 
                    n.trees=5000, interaction.depth=4, shrinkage=0.2, verbose=F)
yhat.boost <- predict(boost.boston, newdata = Boston[-train,], n.trees=5000)
mean((yhat.boost - boston.test)^2)
## Support Vector Classifier
#sinstall.packages("e1071")
library(e1071)
# svm() function in the e1071
# Generate training data
set.seed(1)
x <- matrix(rnorm(20 * 2), ncol=2)
y <- c(rep(-1, 10), rep(1, 10))
x[y==1,] <- x[y==1,] + 1
plot(x, col=(3 - y))
# Fit the support vector classifier
dat <- data.frame(x=x, y=as.factor(y))
svmfit <- svm(y~., data=dat, kernel="linear", cost=10, scale=FALSE)
# "cost" is similar to tuning parameter C, but with opposite 
# effects: small "cost", wide margin; large "cost", narrow margin
plot(svmfit, dat)
# Find support vectors
svmfit$index
summary(svmfit)
# Use a smaller value for cost
svmfit <- svm(y~., data=dat, kernel="linear", cost=0.1, scale=FALSE)
plot(svmfit, dat)
svmfit$index
# Use cross validation to find best value for cost with tune() functions
set.seed(1)
tune.out <- tune(svm, y~., data=dat, kernel="linear", 
                 ranges=list(cost=c(0.001, 0.01, 0.1, 1, 5, 10, 100)))
summary(tune.out)
# Best model
bestmod <- tune.out$best.model
summary(bestmod)
# Generate test data
xtest <- matrix(rnorm(20 * 2), ncol=2)
ytest <- sample(c(-1, 1), 20, rep=TRUE)
xtest[ytest==1,] <- xtest[ytest==1,] + 1
testdat <- data.frame(x=xtest, y=as.factor(ytest))
# Prediction
ypred <- predict(bestmod, testdat)
table(predict=ypred, truth=testdat$y)
# Use a given value for cost
svmfit <- svm(y~., data=dat, kernel="linear", cost=.01, scale=FALSE)
ypred <- predict(svmfit, testdat)
table(predict=ypred, truth=testdat$y)
