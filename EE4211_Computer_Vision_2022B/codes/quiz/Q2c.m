close all;
clc;
clear;
image = imread('2.png');
rand_mat = rand(size(image));
rand_mat(rand_mat < 0.05) = 255;
rand_mat = 1 - rand_mat;

% Add noise
image_pepper = uint8(double(image) + rand_mat);

% Ideal gauss low pass filter
g2c1 = imgaussflpf(image_pepper, 30);
g2c1 = imfreqfilt(image_pepper, g2c1);
g2c1 = mat2gray(abs(g2c1));

% Contraharmonic_Filter
image_pepper = im2double(image_pepper);
g2c2 = Contraharmonic_Filter(image_pepper, [3,3], 1.5); 

% Max filter
g2c3 = ordfilt2(image_pepper, 9, ones(3,3), 'symmetric');
figure;
subplot(151); imshow(image); title('original image');
subplot(152); imshow(image_pepper); title('noise image');
subplot(153); imshow(g2c1); title('image after Gaussian low pass filtering');
subplot(154); imshow(g2c2, []); title('image after the suitable mean filter');
subplot(155); imshow(g2c3); title('image after the suitable Order-Statistics filter');