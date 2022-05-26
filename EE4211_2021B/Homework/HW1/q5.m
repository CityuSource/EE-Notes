clc;
clear;
close all;

car_orig = imread("car_75DPI_Moire.tif");

%% Fourier Spectrum
f1 = fft2(car_orig);
s1 = abs(f1);

%% Butterworth Notch Filter
D = 30;
n = 2;
[x, y] = size(car_orig);
notch_result = ones(x, y);

for i = 1 : x
    for j = 1 : y
        k = sqrt((i - x / 2)^2 + (j - y / 2)^2);
        notch_result(i, j) = 1 / (1 + (k / D)^(2 * n));
    end
end

%% Result Image
f2 = fftshift(f1);
result = f2.*notch_result;
result = ifftshift(result);
result = ifft2(result);

figure
subplot(1, 2, 1)
imshow(car_orig)
subplot(1, 2, 2)
imshow(result, [])