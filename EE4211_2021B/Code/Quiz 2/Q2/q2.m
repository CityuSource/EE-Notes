clc;
clear;
close all;

I = im2double(imread("2.tif"));

[m, n] = size(I);

%% Gaussian Noise
h = 1/ (3 .^2) * ones(3);
J1 = imnoise(I, "gaussian", 0, 0.05);
J2 = imnlmfilt(J1);
J3 = imfilter(log(J1), h, "conv", "replicate", "same");
J3 = exp(J3);

%%
figure;
subplot(1, 4, 1); imshow(I); title("Original image");
subplot(1, 4, 2); imshow(J1); title("Nosie Image");
subplot(1, 4, 3); imshow(J2); title("Non-local means filter");
subplot(1, 4, 4); imshow(J3); title("Geometric mean filter");

%% Salt Noise
s_salt = 0.1;
mask = rand(m, n);
salt_index = find(mask <= s_salt);

J4 = I;
J4(salt_index) = 1;
J5 = Contraharmonic_Filter(J4, [3,3], -2.5);
J6 = ordfilt2(J4,1,ones(3,3), "symmetric");

%%
figure;
subplot(1,4,1); imshow(I); title("Original image");
subplot(1,4,2); imshow(J4); title("Noise Image");
subplot(1,4,3); imshow(J5); title("Contraharmonic Filter");
subplot(1,4,4); imshow(J6); title("Non-local means Filter");

