options(digits = 6)
#* Test case
#* z0 = qnorm((1-0.05), lower.tail = TRUE)
#* p0 <- pnorm(-z0 + (190 - 175)*sqrt(10)/50)

#* Q1. mean = 4.86, sd = 0.54 n = 100, expected = 0.10, α=0.05
z1 = qnorm((1 - 0.05/2), lower.tail = T)
p1 <- pnorm(-z1 + abs(0.10)*sqrt(100)/0.54)
n2 <- ((qnorm(0.8) + z1)*0.54/0.10)^2

q1q2 <- c("Q1   ", "Q2  ")
print(matrix(c(p1, n2), nrow = 1, dimnames = list(c("Answers"), q1q2)))
cat("\n")

#* Q3. sam mean = 1.2, sam sd = ?, n = 12, pop mean = 1.0, pop sd = 0.4, α=0.05
z3 <- (1.2 - 1.0)*sqrt(12)/0.4
z3_95 <- qnorm(0.975)
if (abs(z3) > z3_95) {r <- TRUE} else {r <- FALSE}
z4_prob <- 2*(1-pnorm(z3))

q3q4 <- c("Q3. Z    ", "Q3. Zc  ", "Q3. Reject?   ", "Q4. p-value    ")
print(matrix(c(z3, z3_95, r, z4_prob), nrow = 1, dimnames = list(c("Answers"), q3q4)))
cat("\n")

#* Q5. sam mean = 1.2, sam sd = 0.6, n = 12, pop mean = 1.0, pop sd = ?, α=0.05
t5 <- (1.2 - 1.0)*sqrt(12)/0.6
t5_prob <- pt(t5, df = 11, lower.tail = F)*2
t6_95 <- qt(0.975, 11)*0.6/sqrt(12)
lower_t6_95 <- 1.2 - t6_95
upper_t6_95 <- 1.2 + t6_95

t8_prob <- (1 - pt(-1.52, df = 7 - 1, lower.tail = F))*2

q5q8 <- c("Q5. p-value  ", "Q6. from    ", "Q6. to  ", "Q8 p-value  ")
print(matrix(c(t5_prob, lower_t6_95, upper_t6_95, t8_prob), nrow = 1, dimnames = list(c("Answers"), q5q8)))
cat("\n")

#* Q9. n = 51, sam mean = 12.50, sam sd = 4.75, pop mean = 14.44, pop sd = ?
t9 <- (14.44 - 12.50)*sqrt(51)/4.75
t9_95 <- qt(0.975, 50)
if (abs(t9) > t9_95) {r <- TRUE} else {r <- FALSE}

q9q10 <- c("Q10. t ", "Q10. Tc    ", "Q10. Reject?   ")
print(matrix(c(t9, t9_95, r), nrow = 1, dimnames = list(c("Answers"), q9q10)))
cat("\n")