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
    Result strResult = {0, 0};
    int logbook[256]; //ASCII code limit 256
    memset(logbook, -1, sizeof(logbook));

    for (int i = 0; i < strlen(str); i++)
    {
        if (logbook[(int)str[i]] < strResult.start)
            strResult.length = max(strResult.length, i - strResult.start + 1);
        else
            strResult.start = logbook[(int)str[i]] + 1;
        logbook[(int)str[i]] = i;
    }

    return strResult;
}

/*
* A helper function to format and print the output.
*/
void printOutput(int caseNo, char *str, Result result)
{
    cout << "Case " << caseNo << endl;
    cout << "The length is " << result.length << endl;

    if (result.length + result.start - strlen(str) == 0)
        cout << "The substring is " << string(str).substr(result.start, result.length) << "\n\n";
    else if (result.length + result.start - strlen(str) == 1)
        cout << "The substring is " << string(str).substr(0, result.length) << "\n\n";
    else //Special case
        cout << "The substring is " << string(str).substr(abs(result.length - result.start), result.length) << "\n\n";
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
    char str[MAX_LENGTH]; // logbook

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
