library("dplyr")
library("ggplot2")
library("SASxport")

# 1.1
DQdata <- read.xport("DIQ_J.XPT")
BMdata <- read.xport("BMX_J.XPT")
BPdata <- read.xport("BPQ_J.XPT")
AUdata <- read.xport("ALQ_J.XPT")

DQdata_selected <- select(DQdata, SEQN, DIQ010)
BMdata_selected <- select(BMdata, SEQN, BMXWT, BMXHT, BMXWAIST, BMXHIP, BMXBMI)
BMdata_selected <- subset(BMdata_selected, is.na(BMdata$BMIWT) & is.na(BMdata$BMIHT))
BPdata_selected <- select(BPdata, SEQN, BPQ020, BPQ080)
AUdata_selected <- select(AUdata, SEQN, ALQ121, ALQ130)

# 1.2
OtData_selected <- merge(DQdata_selected, BMdata_selected, by = "SEQN", all.x = TRUE)
OtData_selected <- merge(OtData_selected, BPdata_selected, by = "SEQN", all.x = TRUE)
OtData_selected <- merge(OtData_selected, AUdata_selected, by = "SEQN", all.x = TRUE)
OtData_selected <- na.omit(OtData_selected)

cat("\nProblem 1.2\n\n")
print(summary(OtData_selected))

# 2.1
OtData_selected <- subset(OtData_selected, OtData_selected$DIQ010 < 3)
OtData_selected <- transform(OtData_selected, DIQ010 = abs(DIQ010 - 2))
OtData_selected <- subset(OtData_selected, OtData_selected$BPQ020 < 3 & OtData_selected$BPQ080 < 3)
OtData_selected <- subset(OtData_selected, OtData_selected$ALQ121 < 11 & OtData_selected$ALQ130 < 16)

# 2.2
Overweight <- ifelse(OtData_selected$BMXWT / (OtData_selected$BMXHT / 100)^2 > 30, 1, 0)
OtData_selected$Overweight <- Overweight

cat("\nProblem 2.2\n\n")
P22H0 <- c("(H0) There is no association between Height and BMI\n")
P22H1 <- c("(H1) There is an association between Height and BMI\n")
cat(P22H0, P22H1)

HvsBMI.res <- cor.test(OtData_selected$BMXBMI, OtData_selected$BMXHT, method = "pearson")
print(HvsBMI.res)

HvsBMI.lm <- lm(BMXBMI ~ I(BMXWT / (BMXHT / 100)^2), data = OtData_selected)
print(summary(HvsBMI.lm))
cat("AS the Adjusted R-squared is 1, the calculate BMI is consistent with the result obtained\n")

# 2.3
cat("\nProblem 2.3\n\n")
print(sapply(OtData_selected, is.factor))
cat("\n")
print(apply(OtData_selected, 2, class))

# 2.4
cat("\nProblem 2.4\n\n")
print(summary(OtData_selected))

# 3.1
cat("\nProblem 3.1\n\n")
cat("Logistic regression model for DIQ010 ~ BMXHT + BMXWAIST + BPQ020\n")
glm1 <- glm(formula = DIQ010 ~ BMXHT + BMXWAIST + BPQ020, family = binomial(link = "logit"), data = OtData_selected)
print(summary(glm1))

# 3.2
cat("\nProblem 3.2\n\n")
cat("Logistic regression model for DIQ010 ~ Overweight\n")
glm2 <- glm(formula = DIQ010 ~ Overweight, family = binomial(link = "logit"), data = OtData_selected)
print(summary(glm2))

cat("Logistic regression model for DIQ010 ~ BPQ080\n")
glm3 <- glm(formula = DIQ010 ~ BPQ080, family = binomial(link = "logit"), data = OtData_selected)
print(summary(glm3))

cat("Logistic regression model for DIQ010 ~ ALQ130\n")
glm4 <- glm(formula = DIQ010 ~ ALQ130, family = binomial(link = "logit"), data = OtData_selected)
print(summary(glm4))

# 3.3
cat("\nProblem 3.3\n\n")
DvsBMI.res <- cor.test(OtData_selected$DIQ010, OtData_selected$BMXBMI, method = "pearson")
print(DvsBMI.res)

print(ggplot(OtData_selected, aes(x = BMXBMI, y = DIQ010)) +
    geom_point() +
    geom_smooth(method = "glm", method.args = list(family = "binomial"), se = FALSE, formula = y ~ x))
boxplot(BMXBMI ~ DIQ010, data = OtData_selected, main = "Boxplot of Diabetes & BMI", xlab = "Diabetes (with diabetes as 1)", ylab = "BMI", col = topo.colors(2))

# 3.4
OtData_diabetes <- subset(OtData_selected, OtData_selected$DIQ010 == 1)
plot(density(OtData_selected$BMXWT), main = "Distribution of body weight (samples with diabetes)", xlab = "Weight (kg)", ylab = "% of total diabetes case", col = "Blue")
print(ggplot(OtData_selected, aes(x = BMXBMI)) +
    geom_histogram(binwidth = 2, col = "black", fill = "lightblue") +
    labs(title = "BMI histogram (step as 2)", x = "BMI", y = "Number of case"))