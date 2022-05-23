close all;
clc;
clear;

f  = im2double(imread('2.png'));
[m n] = size(f);

% image partitioning
block_function = @(block_struct) (block_struct.data >= graythresh(block_struct.data));
result = blockproc(f,[m/2 n/4],block_function); % apply to each segment individually

figure;
subplot(121); imshow(f); title('noisy, shaded image');
subplot(122); imshow(result); title('applying Otsu method in each subimage');