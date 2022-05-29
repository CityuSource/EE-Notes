%% phase and magnitute Lecture 3A_page 23
clc;  
clear;
close all; 
I1=imread(['screenshotted.png']);
I2=imread(['ss1.png']);
I1 = imresize(I1,[512 512]);
I1 = rgb2gray(I1);
I2 = rgb2gray(I2);
% Get the dimensions of the image.  
% numberOfColorBands should be = 1.
[rows, columns, numberOfColorBands] = size(I1);
if numberOfColorBands > 1
  % It's not really gray scale like we expected - it's color.
  % Convert it to gray scale by taking only the green channel.
  I1 = I1(:, :, 2); % Take green channel.
end
F1=fft2(I1);
F2=fftshift(F1);

S1=abs(F1);
S2=abs(F2);
S3= log(1+ abs(F2));

figure;
subplot(2,2,1);imshow(I1);title('Rectangle');
subplot(2,2,2);imshow(S1,[]);title('Fourier Spectrum');
subplot(2,2,3);imshow(S2,[]);title('Centered Spectrum');
subplot(2,2,4); imshow(S3,[]); title('Enhance Spectrum');

[rows, columns, numberOfColorBands] = size(I2);
if numberOfColorBands > 1
  % It's not really gray scale like we expected - it's color.
  % Convert it to gray scale by taking only the green channel.
  I2 = I2(:, :, 2); % Take green channel.
end
F1=fft2(I2);
F2=fftshift(F1);

S1=abs(F1);
S2=abs(F2);
S3= log(1+ abs(F2)); 

figure;
subplot(2,2,1);imshow(I2);title('Rectangle');
subplot(2,2,2);imshow(S1,[]);title('Fourier Spectrum');
subplot(2,2,3);imshow(S2,[]);title('Centered Spectrum');
subplot(2,2,4); imshow(S3,[]); title('Enhance Spectrum');
