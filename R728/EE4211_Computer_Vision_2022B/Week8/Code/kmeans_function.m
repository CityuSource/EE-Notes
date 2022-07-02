function [class_idx,center_next]=kmeans_function(X,cluster_num,weight)

%X is the data sample£
%cluster_numis the number of the cluster£
%weight is used as the combination of the color information and space information

[row,N]=size(X);
if weight~=0
X_first=weight*X(1:3,:);
X_second=(1-weight)*X(3+1:row,:);
X=[X_first;X_second];
end
    
    %initialize
    center_pre=ones(row,cluster_num);
    center_next=ones(row,cluster_num);
    d=ones(1,cluster_num);
    Class=cell(cluster_num,1);
    cluster_info=ones(cluster_num,N+1);
    
    
    %selet the orignial center randomly
    cluster_info(:,2)= randsrc(cluster_num,1,[1:N]);
    center_pre=X(:,cluster_info(:,2));
    
    while 1
        clear cluster_info Class;
        for k=1:cluster_num
            cluster_info(k,1)=1;
        end
        
        %for all points, assign it to the centers
        for t=1:N
            for k=1:cluster_num
                d(k)=(X(:,t)-center_pre(:,k))'*(X(:,t)-center_pre(:,k));
            end
            j=find(d==min(d));
            cluster_info(j,1)=cluster_info(j,1)+1;
            cluster_info(j,cluster_info(j,1))=t;
        end
    
        %compute the points in the cluster
        for k=1:cluster_num
            Class{k}=ones(row,cluster_info(k,1)-1);
            for j=2:1:cluster_info(k,1)
                Class{k}(:,j-1)=X(:,cluster_info(k,j));
            end
        end
        %recompute the center of the cluster
        for k=1:cluster_num
            center_next(:,k)=mean(Class{k}');
        end
        %if the new cluster and the cluster of the last time is similar,
        %then the result is satified, and we can get the cluster result
        if sum(diag((center_next-center_pre)'*(center_next-center_pre)))<0.1
            break;
        end
        center_pre=center_next;
    end
    
    for i=1:cluster_num
        for j=2:length(nonzeros(cluster_info(i,:)))
            class_idx(cluster_info(i,j))=i;
        end
     end
end