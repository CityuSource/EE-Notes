%% ini
clc;
clear;
close all;

%% laplacian transform
Image = imread('skeleton_orig.tif');
filter1 = fspecial('laplacian', 0);

temp1 = im2double(Image);
sharpen1 = imfilter(temp1, filter1);
sharpen2 = imsubtract(temp1, sharpen1);

%% sobel transform
filter2 = fspecial('sobel');
sharpen3 = imfilter(temp1, filter2);

%% average 5x5 smoothing on sobel imag
filter3 = 1/ (5. ^2)*ones (5);
sharpen4 = imfilter(sharpen3, filter3);

%% product of smoothing and laplacian transform
product1 = immultiply(sharpen2, sharpen4);

%% add the original image and product
sharpen5 = imadd(temp1, product1);

%% gamar transform
gamma1 = 0.5;
sharpen6 = imadjust(sharpen5,[],[],gamma1);

figure;
subplot(1,2,1);imshow(Image); title('Orginal');
subplot(1,2,2);imshow(sharpen6);title('Enhanced Image');
