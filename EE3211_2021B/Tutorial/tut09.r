Alpha <- 0.05

# Q1.
cat("Q1\n")

RiskFactor <- c("SystolicBloodPressure", "FraminghamRelativeWeight", "Cholesterol", "Glucose", "CigaretteSmoking", "Hematorcit", "VitalCapacity", "Age")
MeasureUnit <- c("(mm Hg)", "(%)", "(mg/100 mL)", "(mg/100 mL)", "(cigarettes/day)", "(%)", "(cL)", "(years)")
RegCoeff <- c(0.0019, -0.0060, 0.0056, 0.0066, 0.0069, 0.111, -0.0098, 0.0686)
StdError <- c(0.0070, 0.0100, 0.0029, 0.0038, 0.0199, 0.049, 0.0036, 0.0225)
ZValue <- RegCoeff / StdError
PValue <- 2 * (1 - pnorm(abs(ZValue)))
SigValue <- ifelse(PValue <= Alpha, paste("<", toString(Alpha)), "Not Stat. Sig")

table <- cbind(RiskFactor, MeasureUnit, RegCoeff, StdError, signif(ZValue, 5), signif(PValue, 5), SigValue)
colnames(table) <- c("RiskFactor", "MeasureUnit", "RegCoeff", "StdError", "ZValue", "PValue", "Stat. Significance")
print(table)

# Q2.
cat("\nQ2\n")

for (i in 1:length(RiskFactor)) {
    if (SigValue[i] != "Not Stat. Sig") {
        cat("There are significant associations between", RiskFactor[i], "and sudden death in females without prior CHD.", "\n")
    }
}

# Q3.
cat("\nQ3\n")

ORValue7 <- exp(RegCoeff[7])
print(ORValue7)

# Q4.
cat("\nQ4\n")

CI95Lower7 <- exp(RegCoeff[7] - qnorm(1 - Alpha / 2) * StdError[7])
CI95Upper7 <- exp(RegCoeff[7] + qnorm(1 - Alpha / 2) * StdError[7])
cat("From", CI95Lower7, "to", CI95Upper7, "\n")

# Q5.
cat("\nQ5\n")

reg <- c("glm(df$SuddenDeath ~ df$SystolicBloodPressure + df$FraminghamRelativeWeight + df$Cholesterol + df$Glucose + df$CigaretteSmoking + df$Hematorcit + df$VitalCapacity + df$Age, data = data, family = binomial())")
cat(reg, "\n")

# ORValue <- exp(RegCoeff)
# CI95Lower <- exp(RegCoeff - qnorm(1 - Alpha / 2) * StdError)
# CI95Upper <- exp(RegCoeff + qnorm(1 - Alpha / 2) * StdError)
# table <- cbind(table, ORValue = signif(ORValue, 5), CI95Lower = signif(CI95Lower, 5), CI95Upper = signif(CI95Upper, 5))
# View(table)