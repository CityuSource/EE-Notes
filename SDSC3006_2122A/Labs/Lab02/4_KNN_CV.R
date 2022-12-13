# Smarket data set in the ISLR2 package
library(ISLR2)
names(Smarket)
attach(Smarket)
# Split data (2001-2004 for training, 2005 for test)
train <- (Year < 2005)
Smarket.2005 <- Smarket[!train, ]
Direction.2005 <- Direction[!train]
## K-Nearest Neighbors
# Inputs for knn()
library(class)
train.X <- cbind(Lag1, Lag2)[train,] # training data of predictors
test.X <- cbind(Lag1, Lag2)[!train,] # test data of predictors
train.Direction <- Direction[train] # training data of response
# k=1
set.seed (1) # with multiple obs tied as nearest neighbors, randomly break the tie
knn.pred <- knn(train.X, test.X, train.Direction, k=1)
table(knn.pred, Direction.2005)
(83 + 43) / 252
# k=3
knn.pred <- knn(train.X, test.X, train.Direction, k=3)
table(knn.pred, Direction.2005)
mean(knn.pred == Direction.2005)
## Performance Comparison
# Logistic Regression 56%
glm.fits <- glm(Direction~Lag1+Lag2, data=Smarket,
                family=binomial, subset=train)
glm.probs <- predict(glm.fits, Smarket.2005, type="response")
glm.pred <- rep("Down", 252)
glm.pred[glm.probs > .5] <- "Up"
mean(glm.pred == Direction.2005)
# Linear Discriminant Analysis 56%
lda.fit <- lda(Direction~Lag1+Lag2, data=Smarket, subset=train)
lda.pred <- predict(lda.fit, Smarket.2005)
mean(lda.pred$class == Direction.2005)
# Quadratic Discriminant Analysis 60%
qda.fit <- qda(Direction~Lag1+Lag2, data=Smarket, subset=train)
qda.pred <- predict(qda.fit, Smarket.2005)
mean(qda.pred$class == Direction.2005)
## ROC Curves
library(ROCR)
rocplot <- function(pred, truth, ...) {
  predob <- prediction(pred, truth)
  perf <- performance(predob, "tpr", "fpr")
  plot(perf, ...)
}
# ROC Curve of Logistic Regression
glm.fits <- glm(Direction~Lag1+Lag2, data=Smarket, family=binomial)
glm.pred <- predict(glm.fits, type="response")
contrasts(Direction)
rocplot(glm.pred, Direction, col="blue", main="ROC Curve")
# ROC Curve of QDA
qda.fits <- qda(Direction~Lag1+Lag2, data=Smarket)
qda.pred <- predict(qda.fits, type ="response")
rocplot(qda.pred$posterior[,2], Direction, add=T, col="red")
## Resampling
# Possible models: Auto
# mpg~horsepower(linear)
# mpg~horsepower+horspower^2(quadratic)
# mpg~horsepower+horspower^2+horspower^3(cubic)
# Which model gives the best fit?
set.seed (1) # generate same set of random numbers every time this code is executed
# Pick 196 samples out of 392 randomly
Auto <- na.omit(Auto)
train <- sample(392, 196)
# Fit a linear model using the training data
lm.fit <- lm(mpg~horsepower, data=Auto, subset=train)
# Report MSE
attach(Auto)
mean((mpg - predict(lm.fit, Auto))[-train ]^2)
# Quadratic polynomial model
lm.fit2 <- lm(mpg~poly(horsepower, 2), data=Auto, subset=train)
mean((mpg - predict(lm.fit2, Auto))[-train ]^2)
# Cubic polynomial model
lm.fit3 <- lm(mpg~poly(horsepower, 3), data=Auto, subset=train)
mean((mpg - predict(lm.fit3, Auto))[-train ]^2)
# Try a different training set
set.seed (2)
train <- sample(392, 196)
lm.fit <- lm(mpg~horsepower, data=Auto, subset=train)
mean((mpg - predict(lm.fit, Auto))[-train ]^2)
lm.fit2 <- lm(mpg~poly(horsepower, 2), data=Auto, subset=train)
mean((mpg - predict(lm.fit2, Auto))[-train ]^2)
lm.fit3 <- lm(mpg~poly(horsepower, 3), data=Auto, subset=train)
mean((mpg - predict(lm.fit3, Auto))[-train ]^2)
## Leave-One-Out Cross-Validation
# LOOCV can be automatically computed for generalized linear models using 
# glm() and cv.glm() functions
# cv.glm() is in the boot library
library(boot)
glm.fit <- glm(mpg~horsepower, data=Auto)
cv.err <- cv.glm(Auto, glm.fit)
cv.err$delta
# Automate the process to estimate test error rates for complex polynomial models
cv.error <- rep(0, 10)
for (i in 1:10){
  glm.fit <- glm(mpg~poly(horsepower, i), data=Auto)
  cv.error[i] <- cv.glm(Auto, glm.fit)$delta[1]
  }
cv.error
## k-Fold Cross-Validation
set.seed (17)
cv.error.10 <- rep(0, 10)
for (i in 1:10) {
  glm.fit <- glm(mpg~poly(horsepower, i), data=Auto)
  cv.error.10[i] <- cv.glm(Auto, glm.fit, K=10)$delta[1]
  }
cv.error.10


