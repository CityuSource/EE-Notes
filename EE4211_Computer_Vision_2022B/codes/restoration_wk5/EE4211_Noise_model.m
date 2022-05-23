clc; %(page 19-20 in lecture note 5)
clear;
close all;
I = im2double(imread('Fig0503 (original_pattern).tif'));
[m n]=size(I);

%% Gaussian noise
% mean and std are the parameters of Gaussian distribution
mean = 0;
std = 0.08;
gaussian_noise = mean + std.*randn(m,n);
J1 = I + gaussian_noise;

subplot(2,3,1);
imshow(J1)
title('image + gaussian noise')

subplot(2,3,4);
imhist(J1);
title('Image histogram of gaussian noise')
set(gca,'YTickLabel',[]);
%% Rayleigh noise
% a is the translation parameter of Rayleigh noise
% b is the shape parameter, it is also the sigma mentioned in WIKIPEDIA
a=0;
b=0.1;
rayleigh_noise = a+raylrnd(b,m,n);

% a = -0.2;
% b = 0.03;
% rayleigh_noise = a+(-b .* log(1 - rand(m,n))).^0.5;
J2 =  I + rayleigh_noise;

subplot(2,3,2);
imshow(J2)
title('image + rayleigh noise')

subplot(2,3,5);
imhist(J2);
title('Image histogram of rayleigh noise')
set(gca,'YTickLabel',[]);
%% Gamma noise
% a is the shape parameter, which is denoted as k in WIKI
% b is the scale parameter, which is denoted as theta in WIKI
a = 0.4;
b = 0.4;
gamma_noise = gamrnd(a,b,m,n);
J3 = I + gamma_noise;

subplot(2,3,3);
imshow(J3)
title('image + Gamma noise')

subplot(2,3,6);
imhist(J3);
set(gca,'YTickLabel',[]);
title('Image histogram of gamma noise')
%% Exponential noise 
% lambda is the parameter used in exponential distribution
lambda = 0.1;
exponential_noise = exprnd(lambda, m, n);
J4 = I + exponential_noise;
figure
subplot(2,3,1);
imshow(J4)
title('image + exponential noise')

subplot(2,3,4);
imhist(J4);
set(gca,'YTickLabel',[]);
title('histogram of expoential noise')
%% Uniform noise
% a is the lower bound
% b is the upper bound
a = 0;
b = 0.3;
uniform_noise = a + (b-a)*rand(m,n);
J5 = I + uniform_noise;

subplot(2,3,2);
imshow(J5)
title('image + uniform noise')

subplot(2,3,5);
imhist(J5);
set(gca,'YTickLabel',[]);
title('histogram of uniform noise')
%% salt&pepper noise
% p_salt is the probability of being 'salt' (light point)
% p_pepper is the probability of being 'pepper' (dark point)
% You can set any value, but make sure p_salt + p_pepper <=1 and positive
% this procedure is a little confusing, but it reveals how salt&pepper
% noise works.
p_salt = 0.05;
p_pepper = 0.08;
tmp_mask = rand(m,n);
salt_idx = find(tmp_mask <= p_salt);
pepper_idx = find(tmp_mask > p_salt & tmp_mask <= p_salt+p_pepper);
J6 = I;
J6(salt_idx) = 1;
J6(pepper_idx) = 0;

subplot(2,3,3);
imshow(J6)
title('image + salt&pepper noise')

subplot(2,3,6);
imhist(J6)
set(gca,'YTickLabel',[]);
title('histogram of salt&pepper noise')
% Also, I will show you another method, more convenient, just using imnoise() function.
% Under this circumstance, p_salt = p_pepper, you can not change it.
% d is the probability to be added this noise.
% ----------------------------------------------------
% J6 = imnoise(I, 'salt & pepper', 0.1);
% salt_and_pepper_noise = imnoise(0.5*ones(m,n), 'salt & pepper', 0.1);
% subplot(2,6,6);
% imshow(J6)
% subplot(2,6,12);
% h = imhist(salt_and_pepper_noise);
% h(129) = 0;
% bar(h);
% ---------------------------------------------------

