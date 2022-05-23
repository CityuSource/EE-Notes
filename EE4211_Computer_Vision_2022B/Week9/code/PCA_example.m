clc;
close all;
clear all;
numdata=20; 
%% step 1, generating a dataset
x1=rand(numdata/2,1);
y1=rand(numdata/2,1);
x2=3*rand(numdata/2,1)+3;
y2=3*rand(numdata/2,1)+3;
x=[x1;x2];
y=[y1;y2];
subplot(4,1,1);
plot(x,y, 'o');
title('Original Data');
%% step 2, finding a mean and subtracting
xmean=mean(x);
ymean=mean(y);
xnew=x-xmean*ones(numdata,1);
ynew=y-ymean*ones(numdata,1);
subplot(4,1,2);
plot(xnew,ynew, 'o');
title('mean is deducted')
%% step 3, covariance matrix
covariancematrix=cov(xnew,ynew);
%% step 4, Finding Eigenvectors
[V,D] = eig(covariancematrix);
D=diag(D);
maxeigval=V(:,find(D==max(D)));
%% step 5, Deriving the new data set
%finding the projection onto the eigenvectors
finaldata=maxeigval'*[xnew,ynew]';
subplot(4,1,3);
stem(finaldata, 'DisplayName', 'finaldata', 'YDataSource', 'finaldata');
title('PCA 1D output ')
%we do a classification now
subplot(4,1,4);
title('Final Classification')
hold on
for i=1:size(finaldata,2)
    if  finaldata(i)>=0
        plot(x(i),y(i),'o')
        plot(x(i),y(i),'r*')
        
    else
        plot(x(i),y(i),'o')
        plot(x(i),y(i),'g*')
    end
    
end