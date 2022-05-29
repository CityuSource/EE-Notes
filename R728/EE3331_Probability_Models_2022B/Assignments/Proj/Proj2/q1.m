clear
close all

%% Part A
k = (1:1:50)';%%Can change the interval time by replacing 1 with 0.1
S = 0.6*cos(0.2*k + 55724681);
figure;
subplot(2,1,1);
stem(k,S);

energyofS = sum(S.^2);


%% Part B
n = 100000;
k = (1:1:n);
S = 0.6*cos(0.2*k + 55724681);
energyofS = sum(S.^2);
h0 = randn(10,n)*10;
eh0 = mean(h0,1);
h1 = randn(10,n)*10 + S;
eh1 = mean(h1,1);


h = [h0,h1].';
label0 = zeros(1,n);
label1 = ones(1,n);
label = [label0,label1];
[X,Y] = perfcurve(label,h,1);
figure;
subplot(1,2,1);
plot(X,Y);
e = [eh0,eh1].';
[X,Y] = perfcurve(label, e,1);
subplot(1,2,2);
plot(X,Y);

%% Part C
n = 100000;
k = (1:1:n);
S = 0.6*cos(0.2*k + 55724681);
h0 = randn(1,n)*10;
h1 = randn(1,n)*10;

for i=1:n
    h1(1,i) = h1(1,i) * S(1,i);
end

h = [h0,h1].';
label0 = zeros(1,n);
label1 = ones(1,n);
label = [label0,label1];
[X,Y] = perfcurve(label,h,1);
figure;
plot(X,Y);
