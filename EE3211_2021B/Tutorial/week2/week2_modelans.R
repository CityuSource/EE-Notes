data<-read.table("Person_Index.txt",header = T) # load data
data

var(data$Height) # variance calculation
sd(data$Weight) # Standard Deviation calculation

BMI <- c() # create space for BMI
rank <- c() # create space for BMI_Index

for (i in 1:nrow(data)){   # loop:row by row
  temp_BMI <- (10000*data[i,3]/(data[i,2]*data[i,2]))  # BMI value equation
  if (temp_BMI<18.5){  # give index to BMI value
    temp_rank <- 0
  }
  else if (temp_BMI<25){
    temp_rank <- 1
  }
  else if (temp_BMI<30){
    temp_rank <- 2
  }
  else if (temp_BMI<35){
    temp_rank <-3
  }
  else if (temp_BMI<40){
    temp_rank <-4
  }
  else{
    temp_rank <-5
  }
  BMI<-rbind(BMI,temp_BMI)  # store temp_BMI to BMI
  rank<-rbind(rank,temp_rank) # store temp_rank to rank
}
data<-cbind(data,BMI)  # add col:BMI
data<-cbind(data,rank) # add col:Index

qqnorm(data$BMI);qqline(data$BMI)  # Q-Q plot, 
hist(data$BMI)  # histogram 
mean(data$rank)  # calculate miu
data$rank<- factor(data$rank) # change data type (from num -> factor)
summary(data$rank)
x<-c(34/500,66/500,68/500,65/500,65/500,202/500)   # PMF
y<-c(0,1,2,3,4,5)
E<- sum(x*y)  # expected value
E  
