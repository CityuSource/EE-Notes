clc;
clear;
close all;

%% atmos blur Lecture 5_Page 71
I=imread('aerial_view_no_turb.tif');
[P,Q]=size(I);
H_1 = zeros(P,Q);
k1 = 0.0025;
k2 = 0.001;
k3 = 0.00025;
for x = (-P/2):1:(P/2)-1
     for y = (-Q/2):1:(Q/2)-1
        D = (x^2 + y^2)^(5/6);
        D_0 = 60;
        H_1(x+(P/2)+1,y+(Q/2)+1) = exp(-k1*D);   
        H_2(x+(P/2)+1,y+(Q/2)+1) = exp(-k2*D);   
        H_3(x+(P/2)+1,y+(Q/2)+1) = exp(-k3*D);   
     end
end

F_I=fftshift(fft2(I));
G1 = H_1.*F_I ;
gc1 = ifft2(ifftshift(G1));

G2 = H_2.*F_I ;
gc2 = ifft2(ifftshift(G2));

G3 = H_3.*F_I ;
gc3 = ifft2(ifftshift(G3));

figure;
subplot(2,2,1);imshow(I);title('original image'); 
subplot(2,2,2);imshow(abs(gc1),[]);title('Image with atmos blur k=0.0025'); 
subplot(2,2,3);imshow(abs(gc2),[]);title('Image with atmos blur k=0.001'); 
subplot(2,2,4);imshow(abs(gc3),[]);title('Image with atmos blur k=0.00025'); 
%% ------motion blur------------------ Lecture 5 page 77
I1=imread('original_DIP.tif');
[P,Q]=size(I1);
H = zeros(P,Q);
a = 0.1;
b = 0.1;
T = 1;
for x = (-P/2):1:(P/2)-1
     for y = (-Q/2):1:(Q/2)-1
        R = (x*a + y*b)*pi;
        if(R == 0)
            H(x+(P/2)+1,y+(Q/2)+1) = T;
        else H(x+(P/2)+1,y+(Q/2)+1) = (T/R)*(sin(R))*exp(-1i*R);
        end
     end
end

F_I=fftshift(fft2(I1));
G = H.*F_I ;
gc = ifft2(ifftshift(G));
figure;
subplot(1,2,1);imshow(I);title('original image'); 
subplot(1,2,2);imshow(abs(gc),[]);title('Image with motion blur'); 

