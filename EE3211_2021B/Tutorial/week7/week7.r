# Q1
drugA <- c(1.9, 0.8, 1.1, 0.1, 4.4, 2.5, 1.6, 4.6, 1.4, -0.1)
drugB <- c(0.7, -1.6, 2.2, -1.2, 3.4, 3.7, 0.8, 0, 2, -0.1)

print(shapiro.test(drugA))
print(shapiro.test(drugB))

print(wilcox.test(drugA, drugB, alternative = "two.sided", mu = 0, paired = FALSE, exact = NULL, correct = TRUE, conf.int = FALSE, conf.level = 0.95))

# Q2
setwd("B:\\Bridge\\City2021_SEM_B\\EE3211\\Tutorial\\week7")
load("TEAR.DAT.rdata")

dataIM <- tear[, c("od6im1", "od6im2", "os6im1", "os6im2")]
dataBase <- tear[, c("od6bas1", "od6bas2", "os6bas1", "os6bas2")]
dataDiff <- rowMeans(dataIM) - rowMeans(dataBase)

print(shapiro.test(dataDiff))
print(wilcox.test(dataDiff, alternative = "two.sided", mu = 0, paired = FALSE, exact = TRUE, correct = TRUE, conf.int = FALSE, conf.level = 0.95))
# exact = TRUE because n = 14 (small sample size)

dataDiffBase <- rowMeans(dataBase)

dataDiffIM <- rowMeans(dataIM)
print(wilcox.test(dataDiffIM, dataDiffBase, alternative = "two.sided", mu = 0, paired = TRUE, exact = TRUE, correct = TRUE, conf.int = FALSE, conf.level = 0.95))

dataPs5 <- tear[, c("od6pst51", "od6pst52", "os6pst51", "os6pst52")]
dataDiffPs5 <- rowMeans(dataPs5)
print(wilcox.test(dataDiffPs5, dataDiffBase, alternative = "two.sided", mu = 0, paired = TRUE, exact = TRUE, correct = TRUE, conf.int = FALSE, conf.level = 0.95))

dataPs10 <- tear[, c("od6pt101", "od6pt102", "os6pt101", "os6pt102")]
dataDiffPs10 <- rowMeans(dataPs10)
print(wilcox.test(dataDiffPs10, dataDiffBase, alternative = "two.sided", mu = 0, paired = TRUE, exact = TRUE, correct = TRUE, conf.int = FALSE, conf.level = 0.95))

dataPs15 <- tear[, c("od6pt151", "od6pt152", "os6pt151", "os6pt152")]
dataDiffPs15 <- rowMeans(dataPs15)
print(wilcox.test(dataDiffPs15, dataDiffBase, alternative = "two.sided", mu = 0, paired = TRUE, exact = TRUE, correct = TRUE, conf.int = FALSE, conf.level = 0.95))