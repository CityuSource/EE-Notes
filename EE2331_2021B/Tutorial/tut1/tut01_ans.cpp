/*
 * Given an array of N non-negative integers, the difference of a set of K numbers is defined by the difference
 * between the smallest and the greatest values in the set. Find the set that minimizes the difference.
 *
 * You are asked to implement the functions main() and findMinDifference() as specified below.
 *
 * Example:
 *
 * For N = 4 and K = 3,
 * and the array contains: {1, 8, 7, 4}
 *
 * The combinations of sets are:
 * {1, 8, 7} => difference is 7
 * {1, 8, 4} => difference is 7
 * {1, 7, 4} => difference is 6
 * {8, 7, 4} => difference is 4
 *
 * Therefore, the min. difference is 4.
 *
 */

#include <cstdlib>
//#include <algorithm> 
#include <iostream>
#include <fstream>

using namespace std;


/*
 * Find a set of k numbers in the arr[0..n-1] such that it's difference is minimum, then return the
 * minimum difference.
 *
 * Precondition: n >= k >= 1
 *
 */
int findMinDifference(int arr[], int n, int k) {

	//sort(arr, arr + n);

	// simple bubble sort
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			if (arr[j] > arr[j + 1]) {
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}

	int min = INT_MAX;
	for (int i = 0; i + k - 1 < n; i++) {
		int diff = arr[i + k - 1] - arr[i];
		if (diff < min) {
			min = diff;
		}
	}
	return min;
}

/*
* A helper function to format and print the output.
*/
void printOutput(int caseNo, int minDiff) {
	cout << "Case " << caseNo << endl;
	cout << "The minimum difference is " << minDiff;
	cout << endl;
}

/*
 * Driver program
 *
 * Read the test cases from the given input file and use them to test
 * your implementation of findMinDifference().
 *
 */
int main(int argc, char** argv) {

	ifstream fin("tut01_input.txt");
	if (!fin) {
		cout << "Input file not found.";
		exit(1);
	}

	int testcase = 0;
	fin >> testcase;

	for (int i = 0; i < testcase; i++) {

		int n, k;
		fin >> n >> k;
		int* arr = new int[n];
		for (int j = 0; j < n; j++)
			fin >> arr[j];

		printOutput(i + 1, findMinDifference(arr, n, k));
		delete[] arr;
	}

	return 0;
}

