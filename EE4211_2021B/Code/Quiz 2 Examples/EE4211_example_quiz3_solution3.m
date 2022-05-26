I=imread('lena.bmp');% 1 point by loading images
[m,n]=size(I);% 1 point by separating images into four parts
I_1=I(1:m/2,1:n/2);
I_2=I(1:m/2,n/2+1:n);
I_3=I(m/2+1:m,1:n/2);
I_4=I(m/2+1:m,n/2+1:n);
% imshow(I);
% subplot(1,4,1);imshow(I_1);
% subplot(1,4,2);imshow(I_2);
% subplot(1,4,3);imshow(I_3);
% subplot(1,4,4);imshow(I_4);

%% BTW low pass filtering % 1.5 points by each accurate filters; 1.5*4=6 points
ff1=imbtwflpf(I_1,20);
out1=imfreqfilt(I_1,ff1);

% laplacian filtering
ff2 = fspecial('laplacian', 0);
out= imfilter(I_2, ff2);
out2 = imsubtract(I_2,out);

% ideal high pass filtering
ff3=imidealflpf(I_3,20);
ff2=1-ff3;
out3=imfreqfilt(I_3,ff2);

% ideal low pass filtering
ff4=imidealflpf(I_4,20);
out4=imfreqfilt(I_4,ff4);

% Processed image % 2 points by combining them togeter as the full image
I_2=zeros(m,n);
I2(1:m/2,1:n/2)=out1;
I2(1:m/2,n/2+1:n)=out2;
I2(m/2+1:m,1:n/2)=out3;
I2(m/2+1:m,n/2+1:n)=out4;

figure;
subplot(1,2,1);imshow(mat2gray(abs(I)));title('Original');
subplot(1,2,2);imshow(mat2gray(abs(I2)));title('Processed image');