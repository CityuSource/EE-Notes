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
	int j = 0;
	int temp = 0;
	int pivot = 0;
	int i = 0;
	for (i = n - 1; i > 0 && i <= n + 1; i--)
	{

		if (number[i] > number[i - 1])
		{
			number[i - 1] = number[j];
			if (number[i + 1] < number[i])
			{
				temp = number[i + 1];
				number[i + 1] = number[j];
				number[j] = temp;
			}
		}
		else if (number[i] < number[i - 1] && number[i - 1] < number[i - 2] && number[i - 2] < number[i - 3])
		{
			return;
		} //4321
		cout << number;
		pivot = number[i + 1];
		break;
	}
	int dontknow = (int)number;
	int remainder = 0;
	int reversed_num = 0;
	while (dontknow != pivot)
	{
		remainder = dontknow % 10;
		reversed_num = reversed_num * 10 + remainder;
		dontknow /= 10;
	}

	dontknow = reversed_num;

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
