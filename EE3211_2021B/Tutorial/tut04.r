#* Q1. F test
cat("Q1\n")
f1 <- (7.3^2 / 2.7^2)
c11 <- qf(0.975, 39, 39)
c12 <- qf(0.025, 39, 39)

if (f1 > c11 || f1 < c12) {
    print("rejected")
} else {
    print("not rejected")
}

pvalue_1 <- 2 * (1 - pf(f1, 39, 39))
print(pvalue_1)

#* Q2. 2 sample t test w/ unequal variances
cat("\nQ2\n")
t2 <- (11.6 - 6.9) / sqrt(7.3^2 / 40 + 2.7^2 / 40)
df2 <- (7.3^2 / 40 + 2.7^2 / 40)^2 / ((7.3^2 / 40)^2 / 39 + (2.7^2 / 40)^2 / 39)
tvalue_2 <- qt(0.975, df2)

if (t2 > tvalue_2 || t2 < -tvalue_2) {
    print("rejected")
} else {
    print("not rejected")
}

pvalue_2 <- 2 * (1 - pt(t2, df2))
print(pvalue_2)

#* Q3. 95% CI
cat("\nQ3\n")
cl3_l <- (11.6 - 6.9) - qt(0.975, df2) * sqrt(7.3^2 / 40 + 2.7^2 / 40)
cl3_h <- (11.6 - 6.9) + qt(0.975, df2) * sqrt(7.3^2 / 40 + 2.7^2 / 40)
print(cl3_l)
print(cl3_h)

#* Q5. F test + T test (2 sample t test w/ equal variances) s1 = 22.7 s2 = 15.4 n = 6 m = 6 mean1 = 143.8 mean2 = 169.0
cat("\nQ5\n")
f5 <- (22.7^2 / 15.4^2)
c51 <- qf(0.975, 5, 5)
c52 <- qf(0.025, 5, 5)

if (f5 > c51 || f5 < c52) {
    print("rejected")
} else {
    print("not rejected")
}

pvalue_51 <- 2 * (1 - pf(f5, 5, 5))
print(pvalue_51)

s5 <- sqrt(((6 - 1) * 22.7^2 + (6 - 1) * 15.4^2) / (6 + 6 - 2))
t5 <- (169.0 - 143.8) / (s5 * sqrt(1 / 6 + 1 / 6))
pvalue_5 <- 2 * pt(-t5, (6 + 6 - 2))
print(pvalue_5)

#* Q6. 99% CI
cat("\nQ6\n")
cl6_l <- (169.0 - 143.8) - qt(0.995, (6 + 6 - 2)) * s5 * sqrt(1 / 6 + 1 / 6)
cl6_h <- (169.0 - 143.8) + qt(0.995, (6 + 6 - 2)) * s5 * sqrt(1 / 6 + 1 / 6)
print(cl6_l)
print(cl6_h)