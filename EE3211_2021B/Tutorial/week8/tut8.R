dir()
t <- read.csv('treatment.txt',sep = '\t')
medicine <- data.frame(t)
medicine

#medicine <- data.frame(
  #Response=c(30,38,35,41,27,24,32,26,31,29,27,35,21,25,17,21,20,19),
  #Treatment=factor(c(rep("a",6),rep("b",8),rep("c",4))))

table(medicine)
attach(medicine)



shapiro.test(Response[Treatment=="a"])
shapiro.test(Response[Treatment=="b"])
shapiro.test(Response[Treatment=="c"])
bartlett.test(Response~Treatment,data=medicine)
a.aov <- aov(Response~Treatment,data = medicine)

summary(a.aov)
pairwise.t.test(Response,Treatment,p.adjust.method = "bonferroni")
