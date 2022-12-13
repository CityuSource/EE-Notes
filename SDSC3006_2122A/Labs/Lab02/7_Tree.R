# Carseats Data Set in the ISLR2 library
# Predict Sales (child car seat sales) in 400 locations based on predictors such
# as Price, Urban (No/Yes, indicate whether the store is in an urban or rural 
# location), US (No/Yes, indicate whether the store is in the US or not) and 
# ShelveLoc (Bad/Medium/Good indicate the quality of the shelving location, i.e., 
# the space within a store in which the car seat is displayed)
library(ISLR2)
attach(Carseats)
## Classification Tree
#install.packages("tree")
library(tree)
## First create a binary response to do classification
# Use ifelse() function to create a binary response variable, which takes on Yes
# if Sales>8, and No otherwise. Then a classification tree is fit for the data.
# Note: the purpose of creating a binary response from the continuous response 
# Sales is only to illustrate how to build a classification tree!
High <- factor(ifelse(Sales<=8, "No", "Yes"))
# Add this column to the table
Carseats <- data.frame(Carseats, High)
# Use the tree() function to build tree
tree.carseats <- tree(High~. -Sales, Carseats)
summary(tree.carseats) # What are in the outputs? 
plot(tree.carseats) # display tree structure
text(tree.carseats, pretty=0) # display node labels
tree.carseats
## Estimate the test error
set.seed(2)
train <- sample(1:nrow(Carseats), 200)
Carseats.test <- Carseats[-train,]
High.test <- High[-train]
tree.carseats <- tree(High~. -Sales, Carseats, subset=train)
tree.pred <- predict(tree.carseats, Carseats.test, type="class")
table(tree.pred, High.test)
(104 + 50) / 200
## Tree Pruning
# Use cv.tree() to perform cross validation for tree pruning
# "FUN=prune.misclass" indicates that classification error rate is used to guide 
# Cross validation
set.seed(7)
cv.carseats <- cv.tree(tree.carseats, FUN=prune.misclass)
names(cv.carseats)
cv.carseats
# Visualize results
plot(cv.carseats$size, cv.carseats$dev, type="b")
# prune.misclass() based on cv results
prune.carseats <- prune.misclass(tree.carseats, best=9)
plot(prune.carseats)
text(prune.carseats, pretty=0)
# Test the pruned tree
tree.pred <- predict(prune.carseats, Carseats.test, type="class")
table(tree.pred, High.test)
(97 + 58) / 200
## Fitting Regression Trees
# Boston data set in the ISLR2/MASS library: predict medv (median home price) of 
# a neighborhood based on various predictors (totally 13 predictors)
# Prepare training and test data
set.seed(1)
train <- sample(1:nrow(Boston), nrow(Boston)/2)
tree.boston <- tree(medv~., Boston, subset=train)
summary(tree.boston)
plot(tree.boston)
text(tree.boston, pretty=0)
# Cross validation
cv.boston <- cv.tree(tree.boston)
plot(cv.boston$size, cv.boston$dev, type="b")
# Calculate test MSE
yhat <- predict(tree.boston, newdata=Boston[-train,])
boston.test <- Boston[-train, "medv"]
mean((yhat - boston.test)^2)
## Bagging
# Bagging can be viewed as a special case of a random forest with m=p. Therefore, 
# it can be performed using the randomForest() function in the randomForest package.
#install.packages("randomForest")
library(randomForest)
# Bagging: randomforest with mtry=#Predictors
set.seed(1)
bag.boston <- randomForest(medv~., data=Boston, subset=train, mtry=12, importance=TRUE)
bag.boston
# Calculate test MSE
yhat.bag <- predict(bag.boston, newdata=Boston[-train,])
mean((yhat.bag - boston.test)^2)
# Actual observations of test data and predictions
plot(yhat.bag, boston.test)
abline(0, 1)
# Change the number of trees
bag.boston <- randomForest(medv~., data=Boston, subset=train, mtry=12, ntree=25)
yhat.bag <- predict(bag.boston, newdata=Boston[-train,])
mean((yhat.bag - boston.test)^2)
## Random Forests
set.seed(1)
rf.boston <- randomForest(medv~., data=Boston, subset=train, mtry=6, importance=TRUE)
yhat.rf <- predict(rf.boston, newdata=Boston[-train,])
mean((yhat.rf - boston.test)^2)
# View the importance of each variable.
importance(rf.boston)
varImpPlot(rf.boston)
