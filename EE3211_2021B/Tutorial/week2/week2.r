#' Load data from file
BMI_data <- read.table("Person_Index.txt", header = TRUE)

print(sd(BMI_data$Weight))
print(var(BMI_data$Weight))

BMI <- c()
Index <- c()

#' Calculate BMI row by row and gives the index number
#' Input the data into the array table
for (i in 1:nrow(BMI_data)) {
    temp_BMI <- (BMI_data[i,3] / (BMI_data[i,2]/100)^2)
    if (temp_BMI < 18.5) {
        temp_Index <- 0
    }
    else if (temp_BMI < 25) {
        temp_Index <- 1
    }
    else if (temp_BMI < 30) {
        temp_Index <- 2
    }
    else if (temp_BMI < 35) {
        temp_Index <- 3
    }
    else if (temp_BMI < 40) {
        temp_Index <- 4
    }
    else {
        temp_Index <- 5
    }
    BMI <- rbind(BMI, temp_BMI)
    Index <- rbind(Index, temp_Index)
}
BMI_data <- cbind(BMI_data, BMI, Index)

#' Set up a 2x2 graph plotting area
par(mfrow=c(2,2))
qqnorm(BMI_data$BMI);qqline(BMI_data$BMI)
hist(BMI_data$BMI)
qqnorm(BMI_data$Index);qqline(BMI_data$Index)
hist(BMI_data$Index)

#' Calculate the mean
print(mean(BMI_data$Index))

#' Change the data type from int to factor (which is a bad way)
#' BMI_data$Index <- factor(BMI_data$Index)
#' summary(BMI_data$Index)

#' Calculate the number of items in index without a loop
#' count_0 <- length(which(BMI_data$Index == 0))
#' count_1 <- length(which(BMI_data$Index == 1))
#' count_2 <- length(which(BMI_data$Index == 2))
#' count_3 <- length(which(BMI_data$Index == 3))
#' count_4 <- length(which(BMI_data$Index == 4))
#' count_5 <- length(which(BMI_data$Index == 5))
#' count <- c(count_0, count_1, count_2, count_3, count_4, count_5)

#' Calculate the number of items in index with a loop
count <- c()
for (i in 1:6) {
    count[i] <- length(which(BMI_data$Index == i - 1))
}
Index_head <- c(0, 1, 2, 3, 4, 5)

#' Calculate the mean by using PMF
mean_pmf <- (count/nrow(BMI_data))*Index_head
print(sum(mean_pmf))