clear
close all
N = 100000;
studentno = 55724681;
rand('state',studentno);
u=4*rand([1,N])-1;
minu = min(u);
maxu = max(u);
meanu = mean(u);
meanpoweru = mean(u.^2);
varianceu = var(u);

v = u.^3;
minv = min(v);
maxv = max(v);
meanv = mean(v);
meanpowerv = mean(v.^2);
variancev = var(v);

uu = histogram(u,'Normalization','pdf');
hold on
vv = histogram(v,'Normalization','pdf');