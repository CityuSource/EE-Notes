library(ISLR2)
attach(Smarket)
## fit model to all data
library(MASS)
LDA.fit = lda(Direction~Lag1+Lag2+Lag3,data=Smarket)
## predict probabilities of training data
LDA.pred0 = predict(LDA.fit,type="response") 
LDA.pred = LDA.pred0$posterior[,2]
## Calculate FPR and TPR under a given threshold
roc.curve=function(s,print=FALSE){
Ps=(LDA.pred>s)*1
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
## Plot ROC Curve
ROC.curve=Vectorize(roc.curve)
M.ROC=ROC.curve(seq(0,1,by=0.01))
plot(M.ROC[1,],M.ROC[2,],col="blue",lwd=2,type="l",xlab="False 
positive rate",ylab="True positive rate")
