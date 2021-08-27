#* Q1.
cat("\nQ1\n")
q1sig <- c("Conclusion: There is a signicant relation between the type of treatment and the response.")
q1notsig <- c("Conclusion: There is no signicant relation between the type of treatment and the response.")

table_1 <- matrix(c(40, 30, 130, 10, 20, 70, 15, 40, 45), nrow = 3, byrow = TRUE)
print(table_1)

chi1_res <- chisq.test(table_1)
print(chi1_res)

#* chi square expected value
# print(chi1_res$expected)

#* chi square p value
# print(chi1_res$p.value)

#* chi square value
# chi1_x2 <- sum((table_1 - chi1_res$expected) ^2 / chi1_res$expected)
# print(chi1_x2)

#* chi square value
# print(chi1_res$statistic)

#* By X^2
# chi1_df <- qchisq(0.999, df = 4, ncp = 0)
# if (chi1_res$statistic > chi1_df) {
#     print("Because X^2 is larger than X^2(df,0.999), it follows that p < 1 - 0.999 = 0.001")
#     print(q1sig)
# } else {
#     print("Because X^2 is smaller than X^2(df,0.999)")
#     print(q1notsig)
# }

#* By p-value
if (chi1_res$p.value < 0.001) {
    print("p-value is less than 0.001")
    print(q1sig)
} else {
    print("p-value is not less than 0.001")
    print(q1notsig)
}

#* Q2.
cat("\nQ2\n")
q2sig <- c("Conclusion: There is an association between the type of treatment and this measure of response.")
q2notsig <- c("Conclusion: There is no association between the type of treatment and this measure of response.")

table_2 <- matrix(c(70, 130, 30, 70, 55, 45), nrow = 3, byrow = TRUE)
print(table_2)

chi2_res <- chisq.test(table_2)
print(chi2_res)

#* By p-value
if (chi1_res$p.value < 0.001) {
    print("p-value is less than 0.001")
    print(q2sig)
} else {
    print("p-value is not less than 0.001")
    print(q2notsig)
}