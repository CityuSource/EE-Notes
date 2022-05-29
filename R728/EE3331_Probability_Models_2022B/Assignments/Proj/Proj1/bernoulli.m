clear
close all
N = 100;
studentno = 55724681;
rand('state',studentno);

p = 0.3;
%%bern = random('bino',1,p,1,N);
bern = random('bino',4,p,1,N);
histogram(bern,'Normalization','probability');