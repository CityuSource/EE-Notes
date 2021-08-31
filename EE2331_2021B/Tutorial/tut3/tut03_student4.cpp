/*
 *
 * Given a positive number, find the next greater number that has same set of digits.
 * If there is no next greater number possible, then the program will return the same number.
 *
 * Examples:
 *
 * Given number:		1234
 * Next greater number: 1243
 *
 * Given number:		4321
 * Next greater number: 4321
 *
 * You are asked to complete the functions specified below.
 *
 */

#include <cstdlib>
#include <iostream>
#include <fstream>
#include <cstring>

#define MAX_LENGTH 1000      // the max allowed input length

using namespace std;


//-------------------------- functions to be implemented by you

/*
 * Given a positive number as a char array number[] of size n, find the next greater number.
 * The function modifies the same array number[] to store the result.
 *
 * Precondition: n > 0
 *
 * Time Complexity Requirement: O(n)
 *
 */
 //
void nextGreaterNumber(char number[], int n)
{
	int i;
	char temp;
	int doesswap = 0;
    int first=0, last=0;
	for(i=n-1;i>=0;--i){
        if(number[i]<number[i+1]){
            first = i;
            doesswap=1;
            break;
        }
    }
    for(i=n-1;i>=0;--i){
        if(number[i]>number[first]){
            last = i;
            break;
        }
    }
    temp = number[first];
    number[first]=number[last];
    number[last]=temp;
    int count = 0;

    //Reverse string after the first index
    if(doesswap==1){
        for(i=first+1;count<(n-first-1)/2;++i,++count){
            //cout << number[i] << " " << number[n-i+first] << endl;
            temp=number[i];
            number[i]=number[n-i+first];
            number[n-i+first]=temp;
        }
    }
	return;
}



//-------------------------- functions prepared for you

/*
 * Driver program
 *
 * Read the test cases from the input file and use them to test
 * your implementation of nextGreaterNumber().
 *
 */
int main() {

	char number[MAX_LENGTH]; // buffer

	ifstream fin("tut03_input.txt");
	if (!fin) {
		cout << "Input file not found.";
		exit(1);
	}

	int testcase = 0;
	fin >> testcase;

	for (int i = 0; i < testcase; i++) {

		cout << "Case " << i + 1 << endl;
		fin >> number;
		cout << "Input:\t" << number << endl;
		nextGreaterNumber(number, (int) strlen(number));
		cout << "Output:\t" << number << endl;
		cout << endl;
	}

	return 0;
}

