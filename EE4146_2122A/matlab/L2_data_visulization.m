clc;
clear;
close all;
load fisheriris.mat ;
str = unique(species) ;  
%% visulization of distribution
i=1;% for type 1
type=str{i};
idx = find(strcmp(species,str{i}));
figure;
subplot(2,2,1);
plot(meas(idx(:),1));title ('Sepal width');
subplot(2,2,2);
plot(meas(idx(:),2));title ('Sepal length');
subplot(2,2,3);
plot(meas(idx(:),3));title ('Petal width');
subplot(2,2,4);
plot(meas(idx(:),4));title ('Petal length');
suptitle(type);
%% pick any three randomly 
pos = zeros(3,3) ;
for i = 1:3
    idx = find(strcmp(species,str{i}));
    pos(:,i) = idx(1:3) ;
end
index=pos(:);
iwant = meas(index,:);

%% petal width distribution
figure;
test=meas(:,4);
hist(test);
figure;
test=meas(:,3);
hist(test);
xlabel('Petal width')
ylabel('Counts')
%% category distribution
figure;
scatter(meas(1:50,4),meas(1:50,3),'r');hold on;
scatter(meas(51:100,4),meas(51:100,3),'g');hold on;
scatter(meas(101:150,4),meas(101:150,3),'b');
xlabel('Petal length (cm)');
ylabel('Petal width (cm)');