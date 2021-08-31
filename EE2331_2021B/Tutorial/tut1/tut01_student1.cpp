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

int findMinDifference(int arr[], int n, int k)
{
    int count = n - k + 1, temp;
    int *arr2 = new int[k]; // Initialize necessary variables
    int minDiff = INT_MAX;

    for (int i = 0; i < n; i++) // Sort by ascending
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (arr[j] > arr[i])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    while (count != 0)
    {
        for (int i = 0; i < k; i++) // Fill in new variables
        {
            arr2[i] = arr[i];
        }

        int max = arr2[0];
        int min = arr2[0];
        for (int i = 1; i < k; i++) // Find maximum
        {
            if (arr2[i] > max)
                max = arr2[i];
        }

        for (int i = 1; i < k; i++) // Find minimum
        {
            if (arr2[i] < min)
                min = arr2[i];
        }

        if (max - min < minDiff) // Check if this iteration's minDiff is the smallest
            minDiff = max - min;

        temp = arr[0]; // Shift first element to the back
        for (int i = 0; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }
        arr[n - 1] = temp;

        count--;
    }
    delete[] arr2;
    return minDiff;
}

/*
* A helper function to format and print the output.
*/
void printOutput(int caseNo, int minDiff)
{
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
int main(int argc, char **argv)
{
    int n, k, cases, caseNo = 1, minDiff;
    ifstream file;
    file.open("input.txt");

    if (!file.is_open()) // Checks if the file opened properly
    {
        perror("Error open");
        exit(EXIT_FAILURE);
    }

    file >> cases;

    while (cases != 0)
    {
        file >> n, file >> k;

        if (n < k || k < 1) // Error check
            perror("K should not be bigger than N and K should not be 0!");

        int *arr = new int[n]; // Initialize array for file input

        for (int j = 0; j < n; j++) // Fill in the array from the file
        {
            file >> arr[j];
        }

        minDiff = findMinDifference(arr, n, k);
        printOutput(caseNo, minDiff); // Print output
        caseNo++;
        cases--;

        delete[] arr; // Prevent memory leak
    }
    return 0;
}