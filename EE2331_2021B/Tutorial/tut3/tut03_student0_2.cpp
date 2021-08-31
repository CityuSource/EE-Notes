/* From Ryan
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
	int pos, smol;

	for (pos = n - 1; pos >= 0; pos--) // Look for smallest integer
	{
		if (number[pos] > number[pos - 1])
			break;
	}

	if (pos == 0)
		return;

	smol = pos;

	for (int i = pos + 1, j = number[pos - 1]; i < n; i++) // Look for next smallest digit after the smallest one
	{
		if (number[i] < number[smol] && number[i] > j)
		{
			smol = i;
		}
	}

	char temp = number[smol]; //Swap the digits
	number[smol] = number[pos - 1];
	number[pos - 1] = temp;

	for (int i = pos, m = n - 1; m >= i; i++, m--) // Reverse function
	{
		temp = number[i];
		number[i] = number[m];
		number[m] = temp;
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
