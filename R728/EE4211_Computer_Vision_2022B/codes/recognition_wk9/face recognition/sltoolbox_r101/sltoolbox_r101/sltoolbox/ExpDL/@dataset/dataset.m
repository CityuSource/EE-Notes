function DS = dataset(varargin)
%DATASET Constructs a dataset object (conform to DSDML)
%
% $ Syntax $
%   - DS = dataset()
%   - DS = dataset(attribs)
%   - DS = dataset(attrname1, attrvalue1, ...)
%   - DS = dataset(filename)
%   - DS = dataset('from:fns', name, format, fns, labels);
%
% $ Arguments $
%   - DS:           the dataset constructed
%   - attribs:      the struct of the attributes
%   - filename:     the DSDML file describing the data set.
%
% $ Description $
%   - DS = dataset() constructs an empty data set with default attributes.
%   
%   - DS = dataset(attribs) constructs an empty data set with some 
%     attributes specified in the struct attribs.
%
%   - DS = dataset(attrname1, attrvalue1, ...) constructs an empty 
%     dataset with some attributes specified in the attribute list.
%
%   - DS = dataset(filename) constructs the dataset by loading it from
%     a DSDML file.
%
%   - DS = dataset('from:fns', name, format, fns, labels) constructs the 
%     dataset by using construct_dataset_fns.m
%
% $ History $
%   - Created by Dahua Lin on Jul 23rd, 2006
%


%% Parse the input arguments

cway = '';
if ~isempty(varargin)
    if length(varargin) == 1
        if ischar(varargin{1})
            cway = 'file';
            filename = varargin{1};
        elseif isstruct(varargin{1})
            cway = 'attr.struct';
            attrs = varargin{1};
        else
            error('dsdml:invalidarg', ...
                'Invalid input arguments for dataset construction');
        end
    else
        switch varargin{1}
            case 'from:fns'
                cway = 'from:fns';
                params = varargin(2:end);
            otherwise
                cway = 'attr.list';
                attrs = varargin;
        end        
    end
end
                    

%% Initialize the default empty dataset

DS.version = '1.00';
DS.name = [];
DS.unittype = [];
DS.format = [];
DS.author = [];
DS.description = [];
DS.attribs = [];
DS.units = [];

DS = class(DS, 'dataset');

%% Further construction

switch cway
    case 'file'        
        DS = readfile(DS, filename);
        
    case 'attr.struct'
        attrnames = fieldnames(attrs);
        nattrs = length(attrnames);
        attrvalues = cell(nattrs, 1);
        for i = 1 : nattrs
            v = attrs.(attrnames{i});
            attrvalues{i} = v;
        end
        DS = dataset_setattribs(DS, nattrs, attrnames, attrvalues);
        
    case 'attr.list'
        len = length(attrs);
        if mod(len, 2) ~= 0
            error('dsdml:invalidarg', ...
                'The length of the input argument list should be even when it specifies attribute list');
        end
        nattrs = len / 2;
        attrnames = attrs(1:2:end)';
        attrvalues = attrs(2:2:end)';
        DS = dataset_setattribs(DS, nattrs, attrnames, attrvalues);       
        
    case 'from:fns'
        DS = construct_dataset_filenames(DS, params{:});
end


%%  Sub functions

function DS = dataset_setattribs(DS, n, attrnames, attrvalues)

% check values
for i = 1 : n
    if ~ischar(attrvalues{i})
        error('dsdml:invalidarg', ...
            'The %d attribute value is not a char string', i);
    end
end

% set values
S = DS;

for i = 1 : n
    aname = attrnames{i};
    aval = attrvalues{i};
    
    if isfield(S, aname)
        S.(aname) = aval;
    else
        S.attribs.(aname) = aval;
    end
    
end

DS = S;


