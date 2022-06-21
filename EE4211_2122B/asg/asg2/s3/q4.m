%% ini
clc;
clear;
close all;

%% q3
image = imread('3.tif');

sigma = 30;
image_glp = imgaussflpf(image, sigma);
image_glp = imfreqfilt(image, image_glp);

image_glhp = imgaussflpf(image_glp, sigma);
image_glhp = 1 - image_glhp;
image_glhp = imfreqfilt(image_glp, image_glhp);

image_ghp = imgaussflpf(image, sigma);
image_ghp = 1 - image_ghp;
image_ghp = imfreqfilt(image, image_ghp);

image_ghlp = imgaussflpf(image_ghp, sigma);
image_ghlp = imfreqfilt(image_ghp, image_ghlp);

figure;
subplot(2,3,1), imshow(image), title('original');
subplot(2,3,2), imshow(image_glp), title('after low pass');
subplot(2,3,3), imshow(image_glhp), title('after high pass');
subplot(2,3,4), imshow(image), title('original');
subplot(2,3,5), imshow(image_ghp), title('after high pass');
subplot(2,3,6), imshow(image_ghlp), title('after low pass');