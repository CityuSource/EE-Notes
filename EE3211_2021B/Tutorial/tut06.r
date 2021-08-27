# Q1.
cat("\nQ1\n")
Estriol <- c(7, 9, 9, 12, 14, 17, 25, 27, 15, 15)
Bweight <- c(25, 25, 25, 27, 27, 32, 32, 34, 34, 34)

EBW <- lm(Bweight ~ Estriol)
cat("y =", EBW$coefficients[1], "+", EBW$coefficients[2], "x", "\n")

# Q2.
cat("\nQ2\n")
est15 <- predict(EBW, data.frame(Estriol = 15))
cat("The estimated average birth weight is", est15, "(g/100) \n")

# Q3.
cat("\nQ3\n")
est2500 <- (25 - EBW$coefficients[1]) / EBW$coefficients[2]
cat("For estriol level at", est2500, "(mg/24hr) \n")

# Q4.
cat("\nQ4\n")
summary <- summary(EBW)
print(summary)

plot(Estriol, Bweight)
lines(Estriol, fitted(EBW))

# Q5.
cat("\nQ5\n")
p_value <- max(summary$coefficients["(Intercept)", "Pr(>|t|)"], summary$coefficients["Estriol", "Pr(>|t|)"])

if (p_value < 0.05) {
    cat("The p-value is", p_value, "which is less than 0.05. \n")
    cat("The Estriol has hightly significant association with the Birth weight. \n")
} else {
    cat("The p-value is", p_value, "which is not less than 0.05. \n")
    cat("The Estriol does not have hightly significant association with the Birth weight. \n")
}


# # Q1.
# cat("\nQ1\n")
# Estriol <- c(7, 9, 9, 12, 14, 15, 15, 17, 25, 27)
# Bweight <- c(25, 25, 25, 27, 27, 34, 34, 32, 32, 34)

# n <- length(Estriol)
# Estriol_Sxx <- sum(Estriol^2)
# Estriol_Sx <- sum(Estriol)
# Bweight_Syy <- sum(Bweight^2)
# Bweight_Sy <- sum(Bweight)
# cross_Sxy <- sum(Estriol * Bweight)
# Lxy <- cross_Sxy - Estriol_Sx * Bweight_Sy / n
# Lxx <- Estriol_Sxx - Estriol_Sx^2 / n
# B <- Lxy / Lxx
# A <- (Bweight_Sy - B * Estriol_Sx) / n

# cat("y = ", A, "+ ", B, "x", "\n")

# # Q2.
# cat("\nQ2\n")
# est15 <- A + B * 15
# print(est15)

# # Q2.
# cat("\nQ2\n")
# newEstriol <- data.frame(Estriol = c(15))
# est15 <- predict(EBW, newdata = newEstriol)
# cat("The estimated average birth weight is", est15, "(g/100) \n")