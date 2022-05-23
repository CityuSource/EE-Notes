clear
close all

k = (0:1:49);%%Can change the interval time by replacing 1 with 0.1
x = 2*cos(k + 55724681);
w = mc(x);

q = randn(1,50);

x2 = x + q;
w2 = mc(x2);

empirical_mean = mean(w2);
mse = mean(w2-w);
variance = mean(w2) - mean(mean(w2)^2,1);

mlmean = mean(x2);
mlvar = var(x2,1);
