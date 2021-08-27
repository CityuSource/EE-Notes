table <- matrix(c(13, 7, 4993, 9987), nrow = 2)
chisq.test(table)

table <- matrix(c(7, 13, 9987, 4993), nrow = 2)
chisq.test(table)

table2 <- matrix(c(6, 8, 111, 387), nrow = 2)
plower <- fisher.test(table2, alternative = "l")
pupper <- fisher.test(table2, alternative = "g")
p2sided <- 2 * min(plower$p.value, pupper$p.value, 0.5)
print(p2sided)