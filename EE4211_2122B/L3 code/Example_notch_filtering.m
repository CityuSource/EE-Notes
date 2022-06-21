close all;
clear all;
clc;

%% ---------Butterworth Notch filter (Fre. Domain)------------
f = imread('car_75DPI_Moire.tif');
%f = imread('newspaper_shot_woman.tif');

f = mat2gray(f,[0 255]);

[M,N] = size(f);
P = 2*M;
Q = 2*N;
fc = zeros(M,N);

for x = 1:1:M
    for y = 1:1:N
        fc(x,y) = f(x,y) * (-1)^(x+y);
    end
end

F = fft2(fc,P,Q);

H_NF = ones(P,Q);

for x = (-P/2):1:(P/2)-1
     for y = (-Q/2):1:(Q/2)-1
        D = 30;
        
        v_k = 59; u_k = 77;
        D_k = ((x+u_k)^2 + (y+v_k)^2)^(0.5);
        H_NF(x+(P/2)+1,y+(Q/2)+1) = H_NF(x+(P/2)+1,y+(Q/2)+1) * 1/(1+(D/D_k)^4);
        D_k = ((x-u_k)^2 + (y-v_k)^2)^(0.5);
        H_NF(x+(P/2)+1,y+(Q/2)+1) = H_NF(x+(P/2)+1,y+(Q/2)+1) * 1/(1+(D/D_k)^4);
        
        v_k = 59; u_k = 159;
        D_k = ((x+u_k)^2 + (y+v_k)^2)^(0.5);
        H_NF(x+(P/2)+1,y+(Q/2)+1) = H_NF(x+(P/2)+1,y+(Q/2)+1) * 1/(1+(D/D_k)^4);
        D_k = ((x-u_k)^2 + (y-v_k)^2)^(0.5);
        H_NF(x+(P/2)+1,y+(Q/2)+1) = H_NF(x+(P/2)+1,y+(Q/2)+1) * 1/(1+(D/D_k)^4);
        
        v_k = -54; u_k = 84;
        D_k = ((x+u_k)^2 + (y+v_k)^2)^(0.5);
        H_NF(x+(P/2)+1,y+(Q/2)+1) = H_NF(x+(P/2)+1,y+(Q/2)+1) * 1/(1+(D/D_k)^4);
        D_k = ((x-u_k)^2 + (y-v_k)^2)^(0.5);
        H_NF(x+(P/2)+1,y+(Q/2)+1) = H_NF(x+(P/2)+1,y+(Q/2)+1) * 1/(1+(D/D_k)^4);
        
        v_k = -54; u_k = 167;
        D_k = ((x+u_k)^2 + (y+v_k)^2)^(0.5);
        H_NF(x+(P/2)+1,y+(Q/2)+1) = H_NF(x+(P/2)+1,y+(Q/2)+1) * 1/(1+(D/D_k)^4);
        D_k = ((x-u_k)^2 + (y-v_k)^2)^(0.5);
        H_NF(x+(P/2)+1,y+(Q/2)+1) = H_NF(x+(P/2)+1,y+(Q/2)+1) * 1/(1+(D/D_k)^4);
     end
end

G_1 = H_NF .* F;

g_1 = real(ifft2(G_1));
g_1 = g_1(1:1:M,1:1:N);     

for x = 1:1:M
    for y = 1:1:N
        g_1(x,y) = g_1(x,y) * (-1)^(x+y);
    end
end

%% -----show-------
close all;

figure();
subplot(3,2,1);
imshow(f,[0 1]);
title('a).Original Image');

subplot(3,2,2);
imshow(log(1 + abs(F)),[ ]);
title('b).Fourier Spectrum');

subplot(3,2,3);
imshow(H_NF,[0 1]);
title('c).Butterworth Notch Filter(D=30 n=2)');

subplot(3,2,4);
h = mesh(1:10:Q,1:10:P,H_NF(1:10:P,1:10:Q));
title('d).3D View of Butterworth Notch Filter')
set(h,'EdgeColor','k');
axis([0 Q 0 P 0 1]);
xlabel('u');ylabel('v');
zlabel('|H(u,v)|');

subplot(3,2,5);
imshow(log(1 + abs(G_1)),[ ]);
title('d).Fourier Spectrum');

subplot(3,2,6);
imshow(g_1,[0 1]);
title('e).Result image');
