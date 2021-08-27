#' Display fractions
library(MASS)

#' Lowpr tail = T -> Left, Lowpr tail = F -> Right
q1_ans <- pnorm(140, mean = 124, sd = 20, lower.tail = F) # above
q2_ans <- pnorm(90, mean = 124, sd = 20, lower.tail = T) # below

q3_ans <- pnorm(200, mean = 219, sd = 50, lower.tail = T) # below
q4_ans <- pnorm(250, mean = 219, sd = 50, lower.tail = F) # above
q5_ans <- (pnorm(250, mean = 219, sd = 50, lower.tail = T) - pnorm(200, mean = 219, sd = 50, lower.tail = T))

print(matrix(c(q1_ans, q2_ans, q3_ans, q4_ans, q5_ans), nrow = 1, dimnames = list(c("Answers"), c("Q1", "Q2", "Q3", "Q4", "Q5"))))

x <- c(-2, -1, 0, 1, 2, 3)
x_p <- c(1 / 12, 3 / 12, 4 / 12, 1 / 12, 2 / 12, 1 / 12)

y <- c(-1, -0.5, 0, 0.5, 1, 1.5)
y_p <- c(1 / 12, 3 / 12, 4 / 12, 1 / 12, 2 / 12, 1 / 12)

z <- c(0, 1, 4, 9)
z_p <- c(4 / 12, 4 / 12, 3 / 12, 1 / 12)

cat(c("\nQ6\n"))
print(fractions(matrix(c(y, y_p), nrow = 2, byrow = TRUE, dimnames = list(c("Distribution of Y", "Probability of Y"), NULL))))
cat(c("\nQ7\n"))
print(fractions(matrix(c(z, z_p), nrow = 2, byrow = TRUE, dimnames = list(c("Distribution of Z", "Probability of Z"), NULL))))

# Expected Value of discrete random variable
x_exp <- weighted.mean(x, x_p)
# Variance of discrete random variable
x_var <- sum((x - x_exp)^2 * x_p)

cat(c("\nQ8\n"))
print(matrix(c(x_exp, x_var), nrow = 1, dimnames = list(c("Answers"), c("Expected value of X", "Variance of X"))))