# Q4.
cat("\nQ4\n")
dataI <- c(1.76, 1.45, 1.03, 1.53, 2.34, 1.96, 1.79, 1.21)
dataU <- c(0.49, 0.85, 1.00, 1.54, 1.01, 0.75, 2.11, 0.92)

print(wilcox.test(dataI, dataU, alternative = "two.sided", mu = 0, paired = FALSE, exact = NULL, correct = TRUE, conf.int = FALSE))