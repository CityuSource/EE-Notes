## Logistic Regression
# Smarket data set in the ISLR2 package
library(ISLR2)
names(Smarket)
dim(Smarket)
summary(Smarket)
attach(Smarket)
# Predict the Direction (Up/Down) of the stock market on a day based on the values
# in the previous days (Lag1, ..., Lag5), etc

## Analysis 1: Training Using All Data
## Step 1: Fit a logistic regression model
glm.fits <- glm (Direction~Lag1+Lag2+Lag3+Lag4+Lag5+Volume,
                 data=Smarket, family=binomial)
summary(glm.fits)
## Step 2: Compute predictions for training data
glm.probs <- predict(glm.fits, type="response")
# Print the first ten probabilities
glm.probs[1:10]
# Convert to class predictions
glm.pred <- rep("Down", 1250)
glm.pred[glm.probs > .5] = "Up"
## Step 3: Assess prediction accuracy
# Print confusion matrix
table(glm.pred, Direction)
# Calculate prediction accuracy
(507 + 145) / 1250
mean(glm.pred == Direction)
## Summary of Results
# 1. Logistic regression correctly predicted the movement of the market 52.2% of the time.
# 2. At first glance, it appears that the logistic regression model is working
# a little better than random guessing. However, this result is misleading
# because we trained and tested the model on the same set of 1250 observations.
# 3. In other words, 100% - 52.2% = 47.8%, is the training error rate.

## Analysis 2: Training + Test
## Step 1: Split data (2001-2004 for training, 2005 for test)
train <- (Year < 2005)
Smarket.2005 <- Smarket[!train, ]
Direction.2005 <- Direction[!train]
## Step 2: Model training
glm.fits <- glm(Direction~Lag1+Lag2+Lag3+Lag4+Lag5+Volume,
                data=Smarket, family=binomial, subset=train)
## Step 3: Prediction on test data
glm.probs <- predict(glm.fits, Smarket.2005, type="response")
glm.pred <- rep("Down", 252)
glm.pred[glm.probs > .5] <- "Up"
## Step 4: Assess prediction accuracy
table(glm.pred, Direction.2005)
mean(glm.pred == Direction.2005)
## Summary of Results
# 1. Test error rate is 100% - 48% = 52% (Training error rate is 47.8%)
# 2. Prediction of the logistic regression is even worse than random guessing!
# 3. Of course this result is not all that surprising, given that one would not
# generally expect to be able to use previous days' returns to predict future
# market performance.
# 4. Recall that all the predictors are not significant in the logistic regression
# model. Maybe removing some predictors which have high p-values can improve the
# prediction performance.

## Linear Discriminant Analysis
# lda() function in the MASS library
library(MASS)
## Step 1. Training using data in 2001-2004
lda.fit <- lda(Direction~Lag1+Lag2, data=Smarket, subset=train)
lda.fit
## Step 2: Predicting for 2005
lda.pred <- predict(lda.fit, Smarket.2005)
names(lda.pred)
lda.pred$class
lda.pred$posterior
## Step 3: Assess prediction accuracy
lda.class <- lda.pred$class
table(lda.class, Direction.2005)
mean(lda.class == Direction.2005)
# Change threshold
lda.class <- rep("Down", length(Direction.2005))
lda.class[lda.pred$posterior[,2] > 0.49 ] <- "Up"
table(lda.class, Direction.2005)

## Quadratic Discriminant Analysis
# qda() function in the MASS library
# The syntax of qda() is identical to lda()
## Step 1. Training using data in 2001-2004
qda.fit <- qda(Direction~Lag1+Lag2, data=Smarket, subset=train)
qda.fit
## Step 2: Predicting for 2005
qda.class <- predict(qda.fit, Smarket.2005)$class
## Step 3: Assess prediction accuracy
table(qda.class, Direction.2005)
mean(qda.class == Direction.2005)
