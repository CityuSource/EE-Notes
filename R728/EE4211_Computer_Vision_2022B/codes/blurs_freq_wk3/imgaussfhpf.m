function ff=imgaussfhpf(I,sigma)
[M,N]=size(I);
 ff=ones(M,N);
 for i=1:M
     for j=1:N
         ff(i,j)= 1-exp( -((i-M/2)^2+(j-N/2)^2) /2/(sigma^2) ); %  1-(gauss)       
     end
 end
