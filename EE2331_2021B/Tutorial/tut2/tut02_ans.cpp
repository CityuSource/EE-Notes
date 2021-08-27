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

    int lastIndex[255];           // for 8-bit ASCII char
    for (int i = 0; i < 255; i++) // initilaize to -1
        lastIndex[i] = -1;

    size_t n = strlen(str);
    int start = 0;                   // start pos of substr
    int length = 1;                  // length of substr
    lastIndex[str[start]] = 0;       // mark pos of first letter
    Result result = {start, length}; // start = 0, length = 1

    for (int i = 1; i < n; i++)
    {

        // if found a repeating char in the current substring
        if (lastIndex[str[i]] >= start)
        {
            start = lastIndex[str[i]] + 1;
        }

        lastIndex[str[i]] = i;
        length = i - start + 1;
        if (length >= result.length)
        {
            result.length = length;
            result.start = start;
        }
    }

    return result;
}

/*
* A helper function to format and print the output.
*/
void printOutput(int caseNo, char *str, Result result)
{
    cout << "Case " << caseNo << endl;
    cout << "The length is " << result.length << endl;
    printf("The substring is %.*s\n", result.length, str + result.start);
    cout << endl;
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
