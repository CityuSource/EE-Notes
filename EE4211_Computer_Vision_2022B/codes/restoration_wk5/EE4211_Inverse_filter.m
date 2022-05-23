clear;close all;clc; % lecture 5 page 85
I = im2double(imread('original_DIP.tif'));% [0,1]
[M,~] = size(I);% square

% Display the original image.
figure;
subplot(1,3,1), imshow(I);
title('original image');

% Simulate a Motion Blur?H(u,v)
T=1;a=0.02;b=0.02;
v=[-M/2:M/2-1];u=v';
A=repmat(a.*u,1,M)+repmat(b.*v,M,1);
H=T/pi./A.*sin(pi.*A).*exp(-1i*pi.*A);
H(A==0)=T;% replace NAN

% Get the blurred Image
% Warning: fftshift should be written
F=fftshift(fft2(I));
FBlurred=F.*H;

% Display the blurred image
IBlurred =real(ifft2(ifftshift(FBlurred)));
subplot(1,3,2), imshow(uint8(255.*mat2gray(IBlurred)));
title('Image with motion blur, no noise');

% Deblur perfectly without Noise
FDeblurred=FBlurred./H;
IDeblurred=real(ifft2(ifftshift(FDeblurred)));
subplot(1,3,3), imshow(uint8(255.*mat2gray(IDeblurred)));
title('Image restoration with Inverse filter');

%% Simulate Noise Model 
noise_mean = 0;
noise_var = 1e-3;
noise=imnoise(zeros(M),'gaussian', noise_mean,noise_var);
FNoise=fftshift(fft2(noise));

% Get the Blurred_Noised Image
FBlurred_Noised=FNoise+FBlurred;

% Display the blurred_noised image
IBlurred_Noised=real(ifft2(ifftshift(FBlurred_Noised)));
figure;
subplot(2,2,1), imshow(uint8(255.*mat2gray(IBlurred_Noised)));
title('Image with noise and blur');

% Deblur when Ignoring Noise
FDeblurred2=FBlurred_Noised./H;
FH1=abs(FDeblurred2);
IDeblurred2=real(ifft2(ifftshift(FDeblurred2)));
subplot(2,2,2), imshow(uint8(255.*mat2gray(IDeblurred2)));
title ('Restoration with Full Inverse filter');


% deblur with parametr bestRadius=20;
maxPSNR=0;
bestRadius=20;

% Displace the best Restoration
FDeblurred2=zeros(M);
for a=1:M
    for b=1:M
        if sqrt((a-M/2).^2+(b-M/2).^2)<bestRadius
            FDeblurred2(a,b)= FBlurred_Noised(a,b)./H(a,b);
        end
    end
end

FH2=abs(FDeblurred2);

IDeblurred2=real(ifft2(ifftshift(FDeblurred2)));
subplot(2,2,3), imshow(uint8(255.*mat2gray(IDeblurred2))); title(['Restoration with Inverse filter (r=20)']);


% deblur with parametr bestRadius=30;
maxPSNR=0;
bestRadius=30;

% Displace the best Restoration
FDeblurred2=zeros(M);
for a=1:M
    for b=1:M
        if sqrt((a-M/2).^2+(b-M/2).^2)<bestRadius
            FDeblurred2(a,b)= FBlurred_Noised(a,b)./H(a,b);
        end
    end
end

FH2=abs(FDeblurred2);

IDeblurred2=real(ifft2(ifftshift(FDeblurred2)));
subplot(2,2,4), imshow(uint8(255.*mat2gray(IDeblurred2))); title(['Restoration with Inverse filter (r=30)']);

