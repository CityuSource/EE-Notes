Alpha <- 0.05

# Q1.
cat("Q1\n")
cat("One-way ANOVA test\n")

# Q2.
cat("\nQ2\n")

mean <- c(-0.43, -2.62, -3.98)
sd <- c(1.60, 2.68, 1.63)
num <- c(15, 15, 13)

BetweenSS <- sum(num * mean^2) - sum(num * mean)^2 / sum(num)
WithinSS <- sum((num - 1) * sd^2)

BetweenMS <- BetweenSS / (length(num) - 1)
WithinMS <- WithinSS / (sum(num) - length(num))

Fvalue <- BetweenMS / WithinMS
Fpvalue <- pf(Fvalue, (length(num) - 1), (sum(num) - length(num)), lower.tail = F)

cat("F score: ", Fvalue, "\tp-value: ", Fpvalue, "\n")
if (Fpvalue < 0.001) cat("At least two of the means are significantly different\n")

# Q3a.
cat("\nQ3\n")

tdf <- sum(num) - length(num)
AdjAlpha <- Alpha / choose(length(num), 2)

ttitle <- c("(1),(2)", "(2),(3)", "(1),(3)")
tvalue <- vector()
tvalue[1] <- abs(mean[1] - mean[2]) / sqrt(WithinMS * (1 / num[1] + 1 / num[2]))
tvalue[2] <- abs(mean[2] - mean[3]) / sqrt(WithinMS * (1 / num[2] + 1 / num[3]))
tvalue[3] <- abs(mean[1] - mean[3]) / sqrt(WithinMS * (1 / num[1] + 1 / num[3]))

tcritical <- qt(1 - AdjAlpha / 2, tdf)
S1value <- ifelse(tvalue > tcritical, "S", "NS")

tpvalue <- (1 - pt(abs(tvalue), tdf)) * 2
S2value <- ifelse(tpvalue < Alpha, paste("<", toString(Alpha)), "NS")

ttestRes <- cbind(ttitle, signif(tvalue, 3), signif(tcritical, 3), S1value, signif(tpvalue, 3), S2value)
colnames(ttestRes) <- c("Groups compared", "|T| score", "Critical value", "Sig by C-value", "p-value", "Sig by p-value")
print(ttestRes)

for (i in 1:length(num)) {
    if (S2value[i] != "NS") {
        cat("There are significant differences from each other from pairs of groups", ttitle[i], "\n")
    }
}

# Q4.
cat("\nQ4\n")
cat("For Q3, as there are only 3 groups, t test is better in this case.")

# mean <- c(3.78, 3.30, 3.32, 3.23, 2.73, 2.59)
# sd <- c(0.79, 0.77, 0.86, 0.78, 0.81, 0.82)
# num <- c(200, 200, 50, 200, 200, 200)