library(ISLR)
attach(Smarket)
##fit logistic regression to all data (2001~2005)
LR.fit = glm(Direction~Lag1+Lag2+Lag3,family=binomial,data=Smarket)
##predict probability of "UP"
LR.pred = predict(LR.fit,type="response")

## Calculate FPR and TPR under a given threshold
roc.curve=function(s,print=FALSE){
Ps=(LR.pred>s)*1
FP=sum((Ps==1)*(Direction=="Down"))/sum(Direction=="Down")
TP=sum((Ps==1)*(Direction=="Up"))/sum(Direction=="Up")
if(print==TRUE){
print(table(Observed=Direction,Predicted=Ps))
}
vect=c(FP,TP)
names(vect)=c("FPR","TPR")
return(vect) }
threshold=0.5
roc.curve(threshold,print=TRUE)
## Plot ROC curve
ROC.curve=Vectorize(roc.curve)
M.ROC=ROC.curve(seq(0,1,by=0.01))
plot(M.ROC[1,],M.ROC[2,],col="grey",lwd=2,type="l",xlab="False 
positive rate",ylab="True positive rate")
