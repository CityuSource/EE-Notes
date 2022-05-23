% read image
I = imread('Fig0343(a)(skeleton_orig).tif');
I = im2double(I);
% (a) show original image
subplot(2,5,1); % allocate a 2x5 space to show image, and show this image in location 1
imshow(I);
title('(a) original image');
% (b) using laplacian filter to process original image
laplacian_filter = [0,1,0;1,-4,1;0,1,0];
I_b = imfilter(I, laplacian_filter, 'replicate');
subplot(2,5,2);
imshow(I_b);
title('(b) laplacian filter of image (a)');
% (b1) display scaled (b)
subplot(2,5,3);
imshow(I_b, [ ]);
title('(b1) scaled laplacian result');
% (c) sharpen
I_c = I - I_b;
subplot(2,5,4);
imshow(I_c);
title('(c) sharpened results');
% (d) sobel filter
sobel_y=[-1,-2,-1;0,0,0;1,2,1]; %detect vertical edge  
sobel_x=[-1,0,1;-2,0,2;-1,0,1]; %detect horizontal edge
I_d1 = imfilter(I, sobel_x, 'replicate');
I_d2 = imfilter(I, sobel_y, 'replicate');
I_d = abs(I_d1) + abs(I_d2);
subplot(2,5,5);
imshow(I_d);
title('(d) sobel result');
% (e): (d) is smoothed with a 5*5 averaging filter
average_filter = fspecial('average',5) ; 
I_e = imfilter(I_d, average_filter);
subplot(2,5,6);                                           
imshow(I_e);  
title('(e) smoothed sobel result'); 
% (f): product of (c) and (e)
%I_f = I_c .* I_e;
I_f=immultiply(I_c, I_e);
subplot(2,5,7);                                           
imshow(I_f);  
title('(f) product of c and e');
% (g): sum of a and f
I_g = I + I_f;
subplot(2,5,8);                                           
imshow(I_g);  
title('(e) sum of a and f'); 
% (h): applying power-law trans to (g)
I_h=imadjust(I_g,[],[],0.5);
subplot(2,5,9);  
imshow(I_h);
title('(h) applying power-law trans/gamma trans to (g)')


