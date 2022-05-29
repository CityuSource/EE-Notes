function dict = huffmanDict( alphabet, prob, debug )
%   HUFFMANDICT_ Code dictionary generator for Huffman coder.
%   ----------------------------------------------------------------------- 
%   DICT = HUFFMANDICT_( ALPH, PROB, DEBUG ) generates a binary Huffman code.
%   The symbols can be represented as a numeric vector or single-dimensional 
%   alphanumeric cell array. The second input, PROB, represents the probability 
%   of occurrence for each of these symbols. SYM and PROB must be of same length.
%   Debug mode (DEBUG) feature when enabled creates a log file of the execution.
% 
%   Example of usage:
%          alphabet = {'x' 'y' 'z' 'w' 'k'} % Alphabet vector                               
%          prob     = [0.1 0.6 0.05 0.15 0.10]  % Probability vector              
%          dict     = huffmandict(alphabet,prob)  
%
%          Command Window (Output)
%
%          symbol: {'x'  'y'  'z'  'w'  'k'}
%            code: {'110'  '0'  '111'  '100'  '101'}
%    
%   ----------------------------------------------------------------------- 
% 
%   --- Error checking ------------------------
% 
    % Check if the probability vector is of type double
    if ( ~strcmp( class(prob), 'double') )
        error('The probability vector must be of type double')
    end
    format short;
    % Check if any of the elements of probability vector is negative.
    if ( min( prob ) < 0 )
        error('Probability of an input symbol cannot be negative')
    end

    % Check if any of the elements of probability vector is greater than 1.
    if ( max( prob ) > 1 )
        error('Probability of an input symbol cannot be greater than 1')
    end

    % Check if both alphabet and probability vectors have the same length
    if( length(alphabet) ~= length(prob) )
        error('Alphabet and probability vectors must have the same length');
    end
%     
%   --- /Error checking ------------------------
% 
    % Check for debug.
    debug_ = 0; % Global Variable.
    if ( nargin > 2 && debug )
        debug_ = 1;
        loop_ = 1;
        fileID = fopen(strcat(get_timestamp, '_huffmandict_.txt'),'w'); % Create the log file.
        fprintf(fileID,'Debug Log - huffmandict_\n----------------------------\n');
    end
    % Initialize working space.
    for i = 1:length( prob )    % For each probability.
        codewords{i} = '';      % Create an empty codeword.
        symbol{i} = i;          % Index the codeword.
        if debug_
            word(i) = alphabet(i);  % Append it's symbol.
        end
    end
% 
%   --- /Error checking ------------------------
%
%   --- Main Function   ------------------------
% 
    % Coding state.     
    while ( prob ~= 1.0 ) % Loop, until we reach the root.
        % Sort the probabilities at every loop.
        [~, arr] = sort(prob);  % Get arrangement of the sorted probabilities.
        % Get the index of the two sets to be merged.
        last = arr(1);
        next = arr(2);
        % Get their main index or indexes.
        right_set = symbol{last};
        left_set  = symbol{next};
        % Get their probabilities.
        right_probability = prob(last); 
        left_probability  = prob(next); 
        % Append them in a new set.
        merged_set = [right_set, left_set]; 
        new_prob   = right_probability + left_probability;
        % Debug logging.
        if debug_
            merged_word = strcat(word{last},word{next});
            fprintf(fileID,'Loop Count : %d\n',loop_);
            fprintf(fileID,'\tMerged Symbols {"%s","%s"}-->{"%s"}\n',word{last},word{next},merged_word);
            fprintf(fileID,'\tMerged Probabilities {%.4f,%.4f}-->{%.4f}\n',right_probability,left_probability,new_prob);
            word(arr(1:2)) = '';
            word = [word merged_word];
            loop_ = loop_ + 1;  
        end
        % Update probability and symbol sets
        symbol(arr(1:2)) = '';
        prob(arr(1:2))   = '';
        symbol = [symbol merged_set];
        prob   = [prob new_prob];  
        if length(prob)==1
            prob = roundn(prob,-8);
        end
        % Get the updated codeword.
        codewords = append_(codewords,right_set,'1');
        codewords = append_(codewords,left_set,'0');
    end
    % Output structure {symbol,codewords}.
    dict.symbol = alphabet; dict.code = codewords;
    % Debug logging.
    if debug_
        fprintf(fileID,'Compression Code :\n----------------------------\n');
        for i = 1:length(dict.symbol)
            fprintf(fileID,'\t{"%s"}-->{"%s"}\n',dict.symbol{i},dict.code{i});
        end
        fclose(fileID);
    end
%
%   --- /Main Function   ------------------------
end
% 
% % EOF -- huffmadict_