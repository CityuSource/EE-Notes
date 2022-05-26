clc;
clear;
close all;
I = im2double(imread('2.tif'));
[m, n]=size(I);

%% Pepper noise % 2 points by adding pepper noise
p_pepper = 0.1;
tmp_mask = rand(m,n);
pepper_idx = find(tmp_mask <= p_pepper);
J1 = I;
J1(pepper_idx) = 0;

figure; % 2 points by showing images
subplot(1,4,1); imshow(I); title('Original image');
subplot(1,4,2); imshow(J1); title('image + pepper noise');

J2 = Contraharmonic_Filter(J1, [3,3], 1.5);% 4 points by choosing the suitable filters;and 2 points by demonstrating right reuslts
subplot(1,4,3); imshow(J2); title('Contraharmonic mean filter with Q=1.5')

J3 = ordfilt2(J1,9,ones(3,3), 'symmetric');
subplot(1,4,4); imshow(J3); title('3x3 max filter');
%% salt and pepper noise
J = imnoise(I, 'salt & pepper');% 2 points by adding salt and pepper noise

block_funtion = @(block_struct) (block_struct.data >= graythresh(block_struct.data));
G = blockproc(J,[m/2 n/3],block_funtion);% 4 points by separating images into six blocks and 2 points applying right threshold methods
figure;
subplot(1,3,1);imshow(I);% 2 points by the right demostration
subplot(1,3,2);imshow(J);
subplot(1,3,3);imshow(G);

