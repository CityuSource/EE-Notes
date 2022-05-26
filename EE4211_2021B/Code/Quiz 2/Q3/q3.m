clc;
clear;
close all;

I = imread("lena.bmp");

[m, n] = size(I);

I1 = I(1 : m / 2, 1 : n / 2);
I2 = I(1 : m / 2, n / 2 + 1 : n);
I3 = I(m / 2 + 1 : m, 1 : n / 2);
I4 = I(m / 2 + 1 : m, n / 2 + 1 : n);

%% OSTU thresholding
T = graythresh(I1);
T = T * 255;
out1 = I1 >= T;

% figure;
% imshow(out1);

%% ideal high pass filtering
ff1 = imidealflpf(I2, 20);
ff1 = 1 - ff1;
out2 = imfreqfilt(I2, ff1);

% figure;
% imshow(out2);

%% laplacian filtering
ff2 = fspecial("laplacian", 0);
out3 = imfilter(I3, ff2);
out3 = imsubtract(I3, out3);

% figure;
% imshow(out3);

%% Basic Global Thresholding
T = 0.5 * (double(min(I4(:))) + double(max(I4(:))));
done = false;
while ~done
    out4 = I4 >= T;
    Tnext = 0.5 * (mean(I4(out4)) + mean(I4(~out4)));
    done = abs(T - Tnext) < 0.5;
    T = Tnext;
end

% figure;
% imshow(out4);

%%
L = zeros(m, n);
L(1 : m / 2, 1 : n / 2) = out1;
L(1 : m / 2, n / 2 + 1 : n) = mat2gray(abs(out2));
L(m / 2 + 1 : m, 1 : n / 2) = out3;
L(m / 2 + 1 : m, n / 2 + 1 : n) = out4;

figure;
subplot(1, 2, 1); imshow(mat2gray(abs(I))); title("Original");
subplot(1, 2, 2); imshow(L); title("Answer");