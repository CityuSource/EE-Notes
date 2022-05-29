%% ini
clc;
clear;
close all;

%% q3
image = imread('2.tif');
filter_a = [2,-1,-1; -1,2,-1; -1,-1,2];
filter_b = [-1,-1,2;- 1,2,-1; 2,-1,-1];
filter_c = [-1,-1,-1; 2,2,2; -1,-1,-1];
filter_d = [-1,2,-1; -1,2,-1; -1,2,-1];
filter_e = [1,1,1; 1,-8,1; 1,1,1];
filter_f = [1,1,1; 1,1,1; 1,1,1];

filter_s1 = [-1,-1,-1; -1,8,-1; -1,-1,-1];
filter_s2 = 1/ (9. ^2)*ones(9);

output_a = imfilter(double(image),filter_a);
output_b = imfilter(double(image),filter_b);
output_c = imfilter(double(image),filter_c);
output_d = imfilter(double(image),filter_d);
output_e = imfilter(double(image),filter_e);
output_f = imfilter(double(image),filter_f);

output_s1 = imfilter((image),filter_s1);
output_s2 = imfilter((image),filter_s2);

figure;
subplot(3,3,1);imshow(image);title('original');
subplot(3,3,2);imshow(output_s1);title('output_s1');
subplot(3,3,3);imshow(output_s2);title('output_s2');
subplot(3,3,4);imshow(output_a);title('output_a');
subplot(3,3,5);imshow(output_b);title('output_b');
subplot(3,3,6);imshow(output_c);title('output_c');
subplot(3,3,7);imshow(output_d);title('output_d');
subplot(3,3,8);imshow(output_e);title('output_e');
subplot(3,3,9);imshow(output_f);title('output_f');