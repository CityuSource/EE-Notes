HD <- read.table("HeartDisease.csv", header = TRUE, sep = ",")
# View(chol_data)
alpha <- 0.05

reg <- glm(HD$TenYearCHD ~ HD$male + HD$age + HD$currentSmoker + HD$prevalentStroke + HD$prevalentHyp + HD$diabetes + HD$totChol + HD$BMI, data = HD, family = binomial())
regRes <- summary(reg)

Z <- qnorm(1 - alpha / 2)
CI95 <- cbind(exp(regRes$coefficients[, 1] - Z * regRes$coefficients[, 2]), exp(regRes$coefficients[, 1] + Z * regRes$coefficients[, 2]))

View(CI95)