%% ini
clc;
clear;
close all;

%% q2
image = imread('2.tif');

%% Butterworth low pass filtering

% Settings
order = 2;
cutoff = 20;

% Fourier transformed image
image_ft = fft2(double(image));

% Designing filter
[size_x, size_y] = size(image);
vec_u = 0:(size_x - 1);
vec_v = 0:(size_y - 1);
id_x = find(vec_u > size_x/2);
vec_u(id_x) = vec_u(id_x) - size_x;
id_y = find(vec_v > size_y/2);
vec_v(id_y) = vec_v(id_y) - size_y;

% Convert 2D vector to 2 matrices
[mat_v, mat_u] = meshgrid(vec_v, vec_u);

% Calculating Euclidean Distance
distance = sqrt(mat_u.^2 + mat_v.^2);

% Filter and apply the filter
filter_blpf = 1./(1 + (distance./cutoff).^(2*order));
image_filt = filter_blpf.*image_ft;

% Converting image
image_blpf = real(ifft2(double(image_filt)));
image_blpf = mat2gray(image_blpf);

%% Laplacian filtering

% Designing filter
size_xsq = size_x *2;
size_ysq = size_y *2;
vec_u = -size_xsq/2:(size_xsq/2 - 1);
vec_v = -size_ysq/2:(size_ysq/2 - 1);

% Convert 2D vector to 2 matrices
[mat_v, mat_u] = meshgrid(vec_v, vec_u);

% Calculating L
lap = -(mat_u.^2 + mat_v.^2);

% Converting image
image_lap = fftshift(fft2(image, size_xsq, size_ysq));
image_lap = real((ifft2(ifftshift(image_lap.*lap))));
image_lap = image_lap(1:size_x, 1:size_y);
image_lap = image_lap/max(image_lap(:));
image_lap = imsubtract(im2double(image), image_lap);

% Subplot
figure;
subplot(1, 3, 1), imshow(image), title('Original');
subplot(1, 3, 2), imshow(image_blpf), title('Image after btw distance = 20');
subplot(1, 3, 3), imshow(image_lap), title('Image after Laplacian filter');

% image = imread('2.tif');

%% Salt noise image

% Create a random matrix
rand_mat = rand(size(image));
rand_mat(rand_mat < 0.05) = 255;

% Add noise
image_salt = uint8(double(image) + rand_mat);

%% Contraharmonic Mean Filter Q = -1.5, mask with 9*9

% Setting
order = -1.5;
mask_x = 9;
mask_y = 9;

% final = (7*7) ./ imfilter(1./(im2double(image_salt) + eps), ones(7,7), 'replicate'); % Harmonic Mean Filter
filter_cmfU = imfilter(im2double(image_salt).^(1 + order), ones(mask_x, mask_y), 'replicate');
filter_cmfL = (imfilter(im2double(image_salt).^(order), ones(mask_x, mask_y), 'replicate') + eps);
image_cmf = filter_cmfU ./ filter_cmfL;

%% Minimum Filter, mask with 9*9
image_minf = ordfilt2(image_salt, 1, ones(mask_x, mask_y), 'symmetric');

%% Subplot
figure;
subplot(2, 2, 1), imshow(image), title('Original');
subplot(2, 2, 2), imshow(image_salt), title('Image with salt noise');
subplot(2, 2, 3), imshow(image_cmf), title('Salt image after Contraharmonic Mean Filter');
subplot(2, 2, 4), imshow(image_minf), title('Salt image after Minimum Filter');