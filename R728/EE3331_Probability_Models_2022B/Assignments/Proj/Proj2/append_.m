function codewords = append_(codewords,input_set,input_code)
    for i = 1:length(input_set)
        codewords{input_set(i)} = strcat(input_code,codewords{input_set(i)});      
    end
end