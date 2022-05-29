load coef.mat
face_size=[64,64];
I=imread('1.png');
I=rgb2gray(I);
I=double(I);
I=imresize(I,face_size);
figure;
for i=1:6
    e=coef(:,i);%for i=1:6,e1, e2, e3, e4, e5 and e6 are the eigenvectors 
    e=reshape(e,64,64);
    eigenface=I.*e;%get the eigenface
    if i<=3
        subplot(2,3,i);
        imshow(eigenface,[]);
        title(['Eigenface e',num2str(i)]);
    else
        subplot(2,3,i);
        imshow(eigenface,[]);
        title(['Eigenface e',num2str(i)]);
    end
end