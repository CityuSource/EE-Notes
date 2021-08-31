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
	int i, j;

	// 1) Start from the rightmost digit and find the first digit that is smaller than the digit next to it. 
	for (i = n - 2; i >= 0; i--)
		if (number[i] < number[i + 1])
			break;

	// If no such digit is found, then all digits are in descending order, i.e. no greater number possible. 
	if (i < 0)	
		return;
	

	// 2) Find the smallest digit on right side of number[i] that is greater than number[i].
	// Because digits on the right side of number[i] are ordered descendingly, we can search from 
	// the right most digit until we find the first digit that is greater than number[i]
	for (j = n-1; j > i; j--)
		if (number[j] > number[i]) 
			break;
		

	// 3) Swap the above found smallest digit number[j] with number[i] 
	char temp = number[i];
	number[i] = number[j];
	number[j] = temp;


	// 4) Sort the digits after number[i] in ascending order - i.e. to reserve the digits on the right side
	int s = i + 1;
	int e = n - 1;

	while (s < e) {
		temp = number[s];
		number[s] = number[e];
		number[e] = temp;
		s++;
		e--;
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

