function [Trn, Tst, NameID] = load_img()
% Load the Traing Samples and the Testing Samples. read files in a folder

%% Training Samples
base_path = pwd();

base_path = [base_path filesep 'dataset' filesep];

tmp_names = dir(base_path);

k = 1;
Trn = cell(numel(tmp_names) -2,1);
Tst = cell(numel(tmp_names) -2,1);
NameID = cell(numel(tmp_names)-2,1);

for i = 1:numel(tmp_names)
    % Elimiate the unnecessary
    if(numel(tmp_names(i).name) > 3)
        NameID{k} = tmp_names(i).name;
        whole_path = [base_path filesep NameID{k}];
        files = dir([whole_path filesep '*.png']);
        Trn{k} = cell(5,1);            
        Tst{k} = cell(5,1);
        
        for j = 1:numel(files)
            tmp_str = files(j).name(6:end-4);
            tmp_str(tmp_str == '_') = ',';
            [gid, vid, t1, t2, t3, t4] = strread(tmp_str,'%d%d%d%d%d%d', 'delimiter',',');
            
            if(vid < 6)
                Trn{k}{vid} = imread([whole_path filesep files(j).name]);
            else
                [whole_path filesep files(j).name]
                Tst{k}{vid - 5} = imread([whole_path filesep files(j).name]);
            end
        end
        k = k+1;
    end
end



end