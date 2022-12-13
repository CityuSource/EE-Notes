## Boston data set in the ISLR2 library
library(ISLR2)

# Predict medv (median home price) of a neighborhood based on various predictors 
# such as rm (average number of rooms per house), age (average age of houses), 
# and lstat (percent of households with low socioeconomic status)
# n=506 neighborhoods around Boston
## Fit a simple linear regression: Y=medv, X=lstat
lm.fit <- lm(medv~lstat, data=Boston)
attach(Boston)
lm.fit <- lm(medv~lstat)
summary(lm.fit)
# Is the parameter estimate accurate?
# Does the model fit the data very well?
# Is there a relationship between lstat (percent of households with low socioeconomic 
# status) and medv (median home price) of a neighborhood around Boston?
# What kind of relationship do they have?
# According to the fitted model, if the percent of households with low socioeconomic 
# status increases by 10%, how will the house price change?

## Plot the Fitted Line
plot(lstat, medv, pch=20, col="black")
abline(lm.fit, lwd=3, col="red")
## Prediction
# Prediction given values of X
predict(lm.fit, data.frame(lstat=(c(5, 10, 15))))
# Prediction for a new data set
predict(lm.fit, newdataset)
# Find Intervals
predict(lm.fit, data.frame(lstat=(c(5, 10, 15))), interval="confidence")
predict(lm.fit, data.frame(lstat=(c(5, 10, 15))), interval="prediction")
# Confidence interval: intervals of prediction of f(X)
# Prediction interval: intervals of prediction of Y given X
# Prediction intervals are wider than confidence intervals because of the random
# error (recall the model Y=f(X)+epsilon)

## Fit a multiple linear regression: Y=medv, X_1=lstat, X_2=age
lm.fit <- lm(medv~lstat+age, data=Boston)
summary(lm.fit)
## Using All Predictor Variables
lm.fit <- lm(medv~., data=Boston)
summary(lm.fit)
summary(lm.fit)$r.sq
summary(lm.fit)$sigma

## Qualitative Predictors
head(Carseats)
# Predict Sales (child car seat sales) in 400 locations based on predictors such
# as Price, Urban (No/Yes, indicate whether the store is in an urban or rural 
# location), US (No/Yes, indicate whether the store is in the US or not) and 
# ShelveLoc (Bad/Medium/Good indicate the quality of the shelving location, i.e., 
# the space within a store in which the car seat is displayed)
lm.fit <- lm(Sales~., data=Carseats)
summary(lm.fit)
## Interaction Terms
# Predict Sales (child car seat sales) based on Price (price company charges for
# car seats at each location) and Income (community income level)
lm.fit <- lm(Sales~Price+Income+Price:Income, data=Carseats)
lm.fit <- lm(Sales~Price*Income, data=Carseats)
#lm.fit <- lm(Sales~.+Income:Advertising+Price:Age, data=Carseats)
#lm.fit <- lm(Sales~.+Income*Advertising+Price*Age, data=Carseats)
summary(lm.fit)

## Nonlinear Relationships
# Predict Sales (child car seat sales) based on Price (price company charges for
# car seats at each location)
lm.fit <- lm(Sales~Price+I(Price^2), data=Carseats)
summary(lm.fit)

## Model Diagnostics
# Multiple linear regression: Y=medv, X_1=lstat, X_2=age, X_3=rm
lm.fit <- lm(medv~lstat+age+rm, data=Boston)
# Check for nonlinearity, heteroscedasticity, outliers, high leverage points
help(plot.lm)
plot(lm.fit, which=1)
plot(lm.fit, which=3)
plot(lm.fit, which=5)

## Variance Inflation Factors
#install.packages("car")
library(car)
vif(lm.fit)
