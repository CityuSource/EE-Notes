chol_data <- read.table("cholesterol.csv", header = TRUE, sep = ",")
# View(chol_data)

n <- nrow(chol_data)
print(n)

BP_Sxx <- sum(chol_data$resting_blood_pressure ^ 2)
print(BP_Sxx)
BP_Sx <- sum(chol_data$resting_blood_pressure)
print(BP_Sx)
chol_Syy <- sum(chol_data$chol ^ 2)
print(chol_Syy)
chol_Sy <- sum(chol_data$chol)
print(chol_Sy)
cross_Sxy <- sum(chol_data$resting_blood_pressure * chol_data$chol)
print(cross_Sxy)

Lxy <- cross_Sxy - BP_Sx /n * chol_Sy
print(Lxy)
Lxx <- BP_Sxx - BP_Sx /n * BP_Sx
print(Lxx)

B <- Lxy / Lxx
A <- (chol_Sy - B * BP_Sx) / n
print (B)
print (A)

par(mfrow=c(2,2))

cat("\n")
BPChol <- lm(chol_data$chol ~ chol_data$resting_blood_pressure)
print(summary(BPChol))
print(coefficients(BPChol))

plot(chol_data$resting_blood_pressure, chol_data$chol)
lines(chol_data$resting_blood_pressure, fitted(BPChol))

cat("\n")
HRChol <- lm(chol_data$chol ~ chol_data$maximum_heart_rate)
print(summary(HRChol))
print(coefficients(HRChol))


plot(chol_data$maximum_heart_rate, chol_data$chol)
lines(chol_data$maximum_heart_rate, fitted(HRChol))

cat("\n")
AgeChol <- lm(chol_data$chol ~ chol_data$age)
print(summary(AgeChol))
print(coefficients(AgeChol))

plot(chol_data$age, chol_data$chol)
lines(chol_data$age, fitted(AgeChol))
