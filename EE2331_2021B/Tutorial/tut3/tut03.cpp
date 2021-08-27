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
#include <cstring> //Turn this on if you are not using VS 2019
#include <fstream>
#include <iostream>

#define MAX_LENGTH 1000 // the max allowed input length

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
	int numPos, numSmall;

	//Find the number X which its left is smaller than it
	for (numPos = n - 1; numPos >= 0; numPos--)
		if (number[numPos] > number[numPos - 1])
			break;

	//If there is no next greater number
	if (numPos == 0)
		return;

	//Find the smallest number Y from X's right which is greater than X
	numSmall = numPos;
	for (int i = numPos + 1; i < n; i++)
		if (number[i] < number[numSmall] && number[i] > number[numPos - 1])
			numSmall = i;

	//Swaping the number of X and Y
	swap(number[numPos - 1], number[numSmall]);

	//Reverse the order after X
	//reverse(&number[numPos], &number[n - 1]);
	for (int i = numPos, j = n - 1; i < j; i++, j--)
		swap(number[i], number[j]);

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
int main()
{

	char number[MAX_LENGTH]; // buffer

	ifstream fin("tut03_input.txt");
	if (!fin)
	{
		cout << "Input file not found.";
		exit(1);
	}

	int testcase = 0;
	fin >> testcase;

	for (int i = 0; i < testcase; i++)
	{

		cout << "Case " << i + 1 << endl;
		fin >> number;
		cout << "Input:\t" << number << endl;
		nextGreaterNumber(number, (int)strlen(number));
		cout << "Output:\t" << number << endl;
		cout << endl;
	}

	return 0;
}
