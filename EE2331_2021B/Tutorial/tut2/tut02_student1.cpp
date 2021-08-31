/* 
 *
 * Find the last occurrence of the longest substring without repeating characters.
 * You are asked to implement the functions printOutput() and longestSubstring() as specified below.
 * 
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

#define MAX_LENGTH 1000 // the max allowed input string length

struct Result
{               // the structure used to store the function output
    int start;  // the start position of the longest substring
    int length; // the length of the longest substring
};

//-------------------------- functions to be implemented by you

/*
 * Given a c-string str, find the last occurrence of the longest substring without repeating characters. 
 *  
 * Return a Result object having the start position and the length of the longest substring.
 * 
 * Time Complexity Requirement: O(n)
 * 
 */
Result longestSubstring(char *str)
{
    Result answer;
    answer.length = 0, answer.start = 0;
    int last[256];
    int strL = strlen(str);
    memset(last, -1, sizeof(last));
    for (int lastPos = 0; lastPos < strL; lastPos++)
    {
        if (last[str[lastPos]] < answer.start)
        {
            answer.length = max(answer.length, lastPos - answer.start + 1);
        }
        else
        {
            answer.start = last[str[lastPos]] + 1;
        }
        last[str[lastPos]] = lastPos;
    }
    cout << answer.start << "  " << answer.length << endl;

    /*if (answer.length - answer.start < answer.length / 2)
    {
        answer.start = 0;
    }
    else {
        answer.start = abs(strL - answer.length);
     }*/
    if (answer.length + answer.start - strL == 1)
    {
        answer.start = 0;
    }
    else if (abs(strL - answer.start < answer.length))
    {
        answer.start = abs(answer.start - answer.length);
    }

    return answer;
}

/*
* A helper function to format and print the output.
*/
void printOutput(int caseNo, char *str, Result result)
{
    cout << "Case Number: " << caseNo << endl;
    cout << "The length is " << result.length << endl;
    cout << "The substring is " << string(str).substr(result.start, result.length) << endl
         << endl;
}

//-------------------------- functions prepared for you

/*
 * Driver program
 * 
 * Read the test cases from the input file and use them to test 
 * your implementation of longestSubstring().
 * 
 */
int main(int argc, char **argv)
{

    char str[MAX_LENGTH]; // buffer

    ifstream fin("tut02_input.txt");
    if (!fin)
    {
        cout << "Input file not found.";
        exit(1);
    }

    int testcase = 0;
    fin >> testcase;

    for (int i = 0; i < testcase; i++)
    {
        fin >> str;
        printOutput(i + 1, str, longestSubstring(str));
    }

    return 0;
}

int lengthOfLongestSubstring(string s) {
        vector<int> check(256, -1);
        int maxLen = 0, start = -1;
        for (auto i : s) {
            if (dict[s[i]] > start)
                start = dict[s[i]];
            dict[s[i]] = i;
            maxLen = max(maxLen, i - start);
        }
        return maxLen;
    }
