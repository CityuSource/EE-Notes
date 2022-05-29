function ff=imbtwflpf(I,D0)
[M,N]=size(I);
n=2;
 ff=ones(M,N);
 for i=1:M
     for j=1:N
         dist=sqrt((i-M/2)^2 + (j-N/2)^2);
         ff(i,j)= ( 1 + (dist/D0)^(2*n))^(-1);       
     end
 end
 
 
