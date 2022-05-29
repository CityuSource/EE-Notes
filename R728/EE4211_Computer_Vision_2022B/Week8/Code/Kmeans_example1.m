close all
clear 
clc

%%initialize
cluster_num =3; %choose how many colors to segment;

I = imread('prob1.png');
I2 = rgb2ycbcr(I); 
ycbcr = double(I2( : , : , 1:3));
nrows = size(I2,1);
ncols = size(I2,2);
ab = reshape(ycbcr,nrows*ncols,3);
ab=ab';

cluster_image=zeros(3,nrows*ncols);
segmented_images = cell(1,cluster_num);
%%%%% Using Kmeans_homework to get the cluster result
[cluster_idx cluster_center] = kmeans_function(ab,cluster_num,0); 
pixel_labels = reshape(cluster_idx,nrows,ncols); %reshape the result matrix in order to make it become the image again;
rgb_label = repmat(pixel_labels,[1 1 3]); %reconstruct RGB space;

%%%%% Assign color for every cluster,assign all the pixels which are not the cluster that is focused to 'BLACK';
for k = 1:cluster_num 
    color = I;
    color(rgb_label ~= k) = 0; 
    segmented_images{k} = color;
end

%%%%%%%%%%SHOW THE RESULT%%%%%%%%%%
figure
subplot(1,2,1);
imshow(I), title('Original Image');
subplot(1,2,2);
imshow(pixel_labels,[]), title(['Cluster Result with cluster number',num2str(cluster_num)]);


% show result in different cluster,in order to see more clearly of the
% image clustser, we show the different cluster using rgb data
figure(2)
if cluster_num<=5
    for i=1: cluster_num
        subplot(1,cluster_num,i)
        imshow(segmented_images{i}), title(['Cluster',num2str(i)]);
    end
else
    r=ceil(cluster_num/5);
    for i=1:cluster_num
        subplot(r,5,i)
        imshow(segmented_images{i}), title(['Cluster',num2str(i)]);
    end
end   
