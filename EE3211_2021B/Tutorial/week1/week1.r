#' dir.create("plots")
#' setwd("plots")
getwd()

#' library(gdata)
library(moments) 

#' cls <- read.csv("Cholesterol.csv")
chol_data <- read.table("Cholesterol.csv", header = TRUE, sep = ",")

print(mean(chol_data$Difference))
print(sd(chol_data$Difference))
print(median(chol_data$Difference))

stem(chol_data$Difference)

par(mfrow = c(1,2))
boxplot(chol_data$Difference)
hist(chol_data$Difference, breaks = 12)

print(skewness(chol_data$Difference))

#' print(head(chol_data))
