age <- c(3, 4, 3, 2, 4)
birthweight <- c(135, 120, 100, 105, 130)
SBP <- c(89, 90, 83, 77, 92)

test <- lm(formula = SBP ~ age + birthweight)
summary(test)

summary(anova(test))

# ch7
# One-way ANOVA test
mean <- c(3.78, 3.30, 3.32, 3.23, 2.73, 2.59)
sd <- c(0.79, 0.77, 0.86, 0.78, 0.81, 0.82)
num <- c(200, 200, 50, 200, 200, 200)

BetweenSS <- sum(num * mean^2) - sum(num * mean)^2 / sum(num)
WithinSS <- sum((num - 1) * sd^2)

BetweenMS <- BetweenSS / (length(num) - 1)
WithinMS <- WithinSS / (sum(num) - length(num))

Fvalue <- BetweenMS / WithinMS
Fpvalue <- pf(Fvalue, (length(num) - 1), (sum(num) - length(num)), lower.tail = F)

cat("F score: ", Fvalue, "\tp-value: ", Fpvalue, "\n")
if (Fpvalue < 0.001) cat("At least two of the means are significantly different\n")

# t tests and the method of multiple comparisons
tvalue <- vector()
tvalue[1] <- abs(mean[1] - mean[2]) / sqrt(WithinMS * (1 / num[1] + 1 / num[2]))
tvalue[2] <- abs(mean[2] - mean[3]) / sqrt(WithinMS * (1 / num[2] + 1 / num[3]))
tvalue[3] <- abs(mean[1] - mean[3]) / sqrt(WithinMS * (1 / num[1] + 1 / num[3]))

# ch6
# RegMS ResMS
SBP <- c(89, 90, 83, 77, 92, 98, 82, 85, 96, 95, 80, 79, 86, 97, 92, 88)
Age <- c(3, 4, 3, 2, 4, 5, 2, 3, 5, 4, 2, 3, 3, 4, 3, 3)
Birthwright <- c(135, 120, 100, 105, 130, 125, 125, 105, 120, 90, 120, 95, 120, 150, 160, 125)
n <- 16
k <- 2

qa <- lm(formula = SBP ~ Age + Birthwright)
summary(qa)

SBPest <- qa$coefficients[1] + qa$coefficients[2] * Age + qa$coefficients[3] * Birthwright
ResSS <- sum((SBP - SBPest)^2)
ResMS <- ResSS / (n - k - 1)

TotalSS <- sum((SBP - mean(SBP))^2)
RegSS <- TotalSS - ResSS
RegMS <- RegSS / k

F <- RegMS / ResMS