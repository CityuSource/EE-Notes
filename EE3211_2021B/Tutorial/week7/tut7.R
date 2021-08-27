a <- c(1.9, 0.8, 1.1, 0.1, 4.4, 2.5, 1.6, 4.6, 1.4, -0.1)
b <- c(0.7, -1.6, 2.2, -1.2, 3.4, 3.7, 0.8, 0, 2, -0.1)
shapiro.test(a)
shapiro.test(b)

wilcox.test(a, b, alternative = "two.sided", mu = 0, paired = FALSE, exact = NULL, Correct = TRUE, conf.int = FALSE)


# setwd('D:/PhD Y3/EE3211/week7')
# dir()
setwd("B:\\Bridge\\City2021_SEM_B\\EE3211\\Tutorial\\week7")
load("TEAR.DAT.rdata")
str(tear)
sum(is.na(tear))
Imm <- tear[, c("od6im1", "od6im2", "os6im1", "os6im2", "od6bas1", "od6bas2", "os6bas1", "os6bas2")]
ImmDif <- rowMeans(Imm[, 1:4]) - rowMeans(Imm[, 5:8])
hist(ImmDif)
shapiro.test(ImmDif)
wilcox.test(ImmDif, mu = 0, alternative = "two.side", paired = FALSE, exact = T)


x <- rowMeans(Imm[, 1:4])
y <- rowMeans(Imm[, 5:8])
wilcox.test(x, y, mu = 0, alternative = "two.side", paired = T, exact = T)