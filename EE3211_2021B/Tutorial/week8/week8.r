data <- read.csv("treatment.txt", sep = "\t")
medicine <- data.frame(data)

cat("\nShapiro-Wilk Normality Test\n")
print(shapiro.test(medicine$Response[Treatment == "a"]))
print(shapiro.test(medicine$Response[Treatment == "b"]))
print(shapiro.test(medicine$Response[Treatment == "c"]))

cat("\nVariance Test\n")
print(bartlett.test(Response ~ Treatment, data = medicine))
# p > 0.05

# One-way ANOVA Test
cat("\nOne-way ANOVA Test\n")
aovRes <- aov(Response ~ Treatment, data = medicine)
print(summary(aovRes))
# p-value < 0.05 -> significant differences

# multiple-comparisons
cat("\nPairwise t Test\n")
print(pairwise.t.test(Response, Treatment, p.adjust.method = "bonferroni"))
# p-value(a,b) > 0.05 -> no significant differences
# p-value(a,c) < 0.05 -> significant differences
# p-value(b,c) < 0.05 -> significant differences