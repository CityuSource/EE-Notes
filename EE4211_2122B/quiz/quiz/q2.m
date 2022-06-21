%% ini
clc;
clear;
close all;

image  = imread('2.png');
image = im2gray(image);
[m, n] = size(image);

%% q2a
% Split the image to 2
left = image(:, 1 : end/2);
right = image(:, end/2+1 : end );

% Left with global thresholding
globT = 0.5*(double(min(left(:)))+double(max(left(:))));
    done=false;
    while ~done
        resLeft = left >= globT;
        globTnext = 0.5*(mean(left(resLeft)) + mean(left(~resLeft)));
        done = abs(globT-globTnext) < 0.5;
        globT = globTnext;
    end

% Right with ostu thresholding
otsu= graythresh(right);
otsu= otsu * 255;
resRight = right >= otsu;

% Combine left and right
combImg = imfuse(resLeft, resRight, 'montage');

figure;
subplot(121); imshow(image); title('orginal image')
subplot(122); imshow(combImg); title('image after the processing')

%% q2b
% Split into 8 then process
block_funtion = @(block_struct) (block_struct.data >= graythresh(block_struct.data) *255);
g2b = blockproc(image, [m/2 n/4], block_funtion);

figure;
subplot(121); imshow(image); title('original image');
subplot(122); imshow(g2b); title('image after the processing');

%% q2c
% Create a random matrix
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
image_pepperD = im2double(image_pepper);
g2c2 = Contraharmonic_Filter(image_pepperD, [3,3], 1.5); 

% Max filter
g2c3 = ordfilt2(image_pepper, 9, ones(3,3), 'symmetric');

figure;
subplot(151); imshow(image); title('original image');
subplot(152); imshow(image_pepper); title('noise image');
subplot(153); imshow(g2c1); title('image after Gaussian low pass filtering');
subplot(154); imshow(g2c2, []); title('image after the Contraharmonic filter');
subplot(155); imshow(g2c3); title('image after the Max filter');