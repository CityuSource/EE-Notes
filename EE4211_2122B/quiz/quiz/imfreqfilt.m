function out=imfreqfilt(I,ff)
 
%FFT
I1=fft2(I);
I1=fftshift(I1); % 
 
%apply filter
G=I1.*ff;  % I(u,v)H(u,v)
% spectrum=log(1+abs(G));

G=ifftshift(G); %shift
out=ifft2(G); % IFFT


