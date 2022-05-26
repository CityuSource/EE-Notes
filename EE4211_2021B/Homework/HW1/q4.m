clc;
clear;
close all;

skeleton_orig = imread("Fig0343(a)(skeleton_orig).tif");

%% Laplacia filter
laplacia_filter = fspecial("laplacia");
stepc = imfilter(skeleton_orig, laplacia_filter);
stepc = skeleton_orig - stepc;

%% Sobel filter
sobel_filter = fspecial("sobel");
stepd = imfilter(skeleton_orig, sobel_filter);
stepd = skeleton_orig + stepd;

%% 5*5 averaging filter
stepe = imfilter(stepd, ones(5) / 25);

%% The product of stepc and stepe
stepf = stepe - stepc;

%% Sharpened image which is sum of skeleton_orig and stepf
stepg = stepf + skeleton_orig;

%% Power-law trans.
steph = double(stepg) / 255;
c = 1;
gamma = 0.6;

steph = c * (steph).^gamma;

figure
imshow(steph)