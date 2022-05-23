close all;
clc;
clear;

image = imread('2.png');

%% split the image to left and right
left = image(:, 1 : end/2);
right = image(:, end/2+1 : end );

%% we do left first with global thresholding
globT=0.5*(double(min(left(:)))+double(max(left(:))));
 done=false;
 while ~done
     g=left>=globT;
     globTnext=0.5*(mean(left(g))+mean(left(~g)));
     done=abs(globT-globTnext)<0.5;
     globT=globTnext;
 end

%% then we do right with ostu thresholding
otsu=graythresh(right);
otsu=otsu*255;
gright=right>=otsu;

 figure;
 subplot(1,2,1);imshow(image);title('original image')
combImg = imfuse(g, gright, 'montage');
subplot(1,2,2);imshow(combImg);title('combined image')