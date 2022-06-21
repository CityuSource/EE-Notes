clc; close all; clear;
I = imread('2.tif');
%% butterworth low pass filtering
ff = imbtwflpf(I,10);
btw_out = imfreqfilt(I,ff);
%% Laplacian filtering
f1 = I;
w = [1 1 1;
     1 -8 1;
     1 1 1];
f2 = im2double(f1);
g2 = imfilter(f2, w);
lap_spa_out = imsubtract(f2,g2);% for spatial domain
% clip to [0, 1]
idx = lap_spa_out < 0;
lap_spa_out(idx) = 0;
idx = lap_spa_out > 1;
lap_spa_out(idx) = 1;
figure;
subplot(1,3,1);imshow(f1);title('Original image');
subplot(1,3,2);imshow(btw_out,[]);title('Butterworth Output');
subplot(1,3,3);imshow(lap_spa_out,[]);title('Laplacian Output');

%% Add salt noise
[m n] = size(I);
tmp_mask = rand(m,n);
idx = find(tmp_mask <= 0.1);
J1 = I;
J1(idx) = 255;
J1 = im2double(J1);
% imshow(J1)
%% Contraharmonic filter
J2 = Contraharmonic_Filter(J1, [3,3], -6); %imshow(J2);
% min_val = min(J2(:)); max_val = max(J2(:));
% J2 = (J2 - min_val) / (max_val - min_val);

%% Min filter
J3 = ordfilt2(J1, 1, ones(3,3), 'symmetric');
%% Plot the four images
figure;
subplot(2,2,1); imshow(I);title("Original Image");
subplot(2,2,2), imshow(J1);title("Image with salt noise");
subplot(2,2,3), imshow(J2);title("Filtered with contraharmonic mean filter (Q=-20)");
subplot(2,2,4), imshow(J3);title("Filtered with min filter");

function [output] = Contraharmonic_Filter(input, filter_size, Q)
% input : input image, double
% size: size of filter
% Q: calculation parameter
if length(filter_size)~=2
    error('filter needs two dimensions, row and column')
end
% padding size dependents on the size of filer
x = floor((filter_size(1) - 1) / 2);
y = floor((filter_size(2) - 1) / 2);

padding_img = padarray(input, [x,y], 'replicate'); % to keep the size of the output image
[m,n] = size(input);
output = zeros(size(input));
for i = 1+1 : 1+m
    for j = 1+1 : 1+n
        in_filter = padding_img(i-1 : i+1, j-1 : j+1);
        output(i-1, j-1) = sum(sum(in_filter .^ (Q + 1))) / sum(sum(in_filter .^ Q));
    end
end
end
function ff=imbtwflpf(I,D0)
[M,N]=size(I);
n=2;
 ff=ones(M,N);
 for i=1:M
     for j=1:N
         dist=sqrt((i-M/2)^2 + (j-N/2)^2);
         ff(i,j)= ( 1 + (dist/D0)^(2*n))^(-1);       
     end
 end
end

function out=imfreqfilt(I,ff)
 
%FFT
I1=fft2(I);
I1=fftshift(I1); % 
 
%apply filter
G=I1.*ff;  % I(u,v)H(u,v)
% spectrum=log(1+abs(G));

G=ifftshift(G); %shift
out=ifft2(G); % IFFT


end 
 

