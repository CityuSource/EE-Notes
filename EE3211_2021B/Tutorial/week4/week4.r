GenderRegion <- read.table("GenderRegionM1M2.csv", header = TRUE, sep = ",")
#* attach(GenderRegion)

#* str(GenderRegion)
#* nrow(GenderRegion)
#* ncol(GenderRegion)
#* dim(GenderRegion)

#* names(GenderRegion)
#* colnames(GenderRegion)
#* rownames(GenderRegion)

#* head(GenderRegion)
#* tail(GenderRegion)

#* summary(GenderRegion)

GenderRegion$Gender <- factor(GenderRegion$Gender)
GenderRegion$Region <- factor(GenderRegion$Region)

#* View(GenderRegion)

#* na.rm -> if NULL then skip row
ttest1 <- t.test(GenderRegion$M1 ~ GenderRegion$Gender, alternative = "two.sided", paired = F, na.rm = T, var.equal = T, conf.level = 0.95)
ttest2 <- t.test(GenderRegion$M2 ~ GenderRegion$Region, alternative = "two.sided", paired = F, na.rm = T, var.equal = T, conf.level = 0.95)

#* print(ttest1)
#* print(ttest2)

load("FEV.DAT.rdata")
fev$ageGrpup[fev$Age >= 0 & fev$Age <= 4] <- ">5"
fev$ageGrpup[fev$Age >= 5 & fev$Age <= 9] <- "5-9"
fev$ageGrpup[fev$Age >= 10 & fev$Age <= 14] <- "10-14"
fev$ageGrpup[fev$Age >= 15 & fev$Age <= 19] <- "15-19"

age1 <- subset(fev, ageGrpup == "5-9", na.rm = T)
age2 <- subset(fev, ageGrpup == "10-14", na.rm = T)
age3 <- subset(fev, ageGrpup == "15-19", na.rm = T)

#* F test -> if p-value > 0.05 then var.equal = T else var.equal = F
var.test(formula = fev ~ Sex, data = age1)
#* t.test(fev ~ Sex, data = age1, paired = F, na.rm = T, var.equal = T, conf.level = 0.95)

var.test(formula = fev ~ Sex, data = age2)
#* t.test(fev ~ Sex, data = age2, paired = F, na.rm = T, var.equal = F, conf.level = 0.95)

var.test(formula = fev ~ Sex, data = age3)
#* t.test(fev ~ Sex, data = age3, paired = F, na.rm = T, var.equal = F, conf.level = 0.95)