# ch1
# Percentiles
x <- c(30, 40, 45, 52, 77, 77, 80, 92, 93, 95)
print(quantile(x, probs = 0.6)) # 40%
print(summary(x))

# ch2
# Discrete Random Variable: Expected value
ch2r <- c(0, 1, 2, 3, 4, 5, 6)
ch2pr <- c(0.129, 0.264, 0.271, 0.185, 0.095, 0.039, 0.017)
ch2e <- sum(ch2r * ch2pr)
print(ch2e)

# Discrete Random Variable: Variance + SD
ch2var <- sum((ch2r - mean(ch2r))^2 * ch2pr)
print(ch2var)

target <- 144
mean <- 124
sd <- 20
p_above <- pnorm(target, mean, sd, lower.tail = F) # above
p_below <- pnorm(target, mean, sd, lower.tail = T) # below
print(p_above)
print(p_below)

# ch3
# The Power of a Test
ch3alpha <- 0.05
ch3mean0 <- 120
ch3mean1 <- 115
ch3sd <- 24
ch3n <- 100
ch3power <-
    pnorm(qnorm(ch3alpha) + (ch3mean0 - ch3mean1) * sqrt(ch3n) / ch3sd) +
    pnorm(qnorm(ch3alpha) + (ch3mean1 - ch3mean0) * sqrt(ch3n) / ch3sd)
print(ch3power)
# ch3power <- pnorm(qnorm(ch3alpha) + abs(ch3mean0 - ch3mean1) * sqrt(ch3n) / ch3sd)
# Two tailed -> ch3alpha / 2

# Sample Size Estimation (Two-Sided Alternative)
ch3alpha <- 0.05
ch3beta <- 0.80
ch3sd <- 24
ch3mean0 <- 120
ch3mean1 <- 115
ch3size <- ch3sd^2 * (qnorm(ch3beta) + qnorm(1 - ch3alpha))^2 / (ch3mean0 - ch3mean1)^2
print(ch3size)

# Sample-Size Estimation Based on CI Width (Two-Sided Alternative)
ch3_95CI <- 0.95
ch3sd <- 10
ch3L <- 5
ch3size <- 4 * (qnorm(ch3_95CI / 2 + 0.5))^2 * ch3sd^2 / ch3L^2
print(ch3size)

# ch4
# T score calulator
ch3arr <- c(13, 3, -1, 9, 7, 7, 6, 4, -2, 2)
ch3alpha <- 0.05
ch3t <- mean(ch3arr) * sqrt(length(ch3arr)) / sd(ch3arr)
print(ch3t)

qt(c(ch3alpha / 2, 1 - ch3alpha / 2), df = length(ch3arr) - 1)
t.test(ch3arr)

ch3df <- 151
qt(c(ch3alpha / 2, 1 - ch3alpha / 2), df = ch3df)

# F test
ch4alpha <- 0.05
ch4df0 <- 7
ch4df1 <- 20
ch4sd0 <- 35.6
ch4sd1 <- 17.3
ch4f_score <- ch4sd0^2 / ch4sd1^2
print(ch4f_score)
qf(c(ch3alpha / 2, 1 - ch3alpha / 2), ch4df0, ch4df1)

#######################################

#* Q1. mean = 4.86, sd = 0.54 n = 100, expected = 0.10, a=0.05
target_precentage <- 0.8
sd <- 0.54
expected <- 0.10
n <- 100
z1 <- qnorm((1 - 0.05 / 2), lower.tail = T)
p1 <- pnorm(-z1 + abs(expected) * sqrt(n) / sd)
n2 <- ((qnorm(target_precentage) + z1) * sd / expected)^2
print(p1)
print(n2)

#* Q5. sam mean = 1.2, sam sd = 0.6, n = 12, pop mean = 1.0, pop sd = ?, a=0.05
sample_mean <- 62
pop_mean <- 64
n <- 15
sam_sd <- 7
t5 <- (sample_mean - pop_mean) * sqrt(n) / sam_sd
t5_prob <- (1 - pt(t5, df = n - 1, lower.tail = F)) * 2
t6_95 <- qt(0.975, 11) * sam_sd / sqrt(n)
lower_t6_95 <- sample_mean - t6_95
upper_t6_95 <- sample_mean + t6_95
print(t5)
print(t5_prob)
print(t6_95)
print(lower_t6_95)
print(upper_t6_95)

x <- c(0, 1, 2, 3)
x_p <- c(0.23, 0.17, 0.35, 0.25)
x_exp <- weighted.mean(x, x_p)
print(x_exp)

x <- c(-49, 10, -27, -13, -36, -19, -48, -21, -8, -16, -32, -28, 13, -31, -2, -19, -19, -35, 8, -23, -13, -8, -41, -12)
print(mean(x))
x1 <- c(x, mean(x))
print(sd(x1))

x <- c(5, 7, 7, 27, 41, 49, 60, 63, 62, 65, 85, 80, 83, 87, 88)
print(quantile(x, probs = 0.5))