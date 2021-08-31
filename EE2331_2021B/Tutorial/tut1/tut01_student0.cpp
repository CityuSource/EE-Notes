/* 
 * Given an array of N integers, the difference of a set of K numbers is defined by the difference 
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
    int minDiff, Tempvalue, c = n - k + 1;
    int **nkArray = new int *[c];
    for (int i = 0; i < c; i++)
        nkArray[i] = new int[n];
    int *Diff = new int[c];

    //Array sorting by ascending
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[i] > arr[j])
            {
                Tempvalue = arr[i];
                arr[i] = arr[j];
                arr[j] = Tempvalue;
            }
        }
    }

    //Creating combinations of array
    for (int i = 0; i < c; i++)
        for (int j = 0; j < k; j++)
            nkArray[i][j] = arr[j + i];

    //Find Diff
    for (int i = 0; i < c; i++)
        Diff[i] = nkArray[i][k - 1] - nkArray[i][0];

    //Find minDiff
    minDiff = Diff[0];
    for (int i = 1; i < c; i++)
        if (Diff[i] < minDiff)
            minDiff = Diff[i];

    //Delete arrays
    for (int i = 0; i < c; i++)
        delete[] nkArray[i];
    delete[] nkArray;
    delete[] Diff;

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
    int caseNo;

    ifstream data_input;
    data_input.open("tut01_input.txt");
    //data_input.open("B:/Bridge/City2021_SEM_B/EE2331/Tutorial/tut1/tut01_input.txt");

    //Runs if file is found
    if (data_input.is_open())
    {
        data_input >> caseNo;
        int **arr = new int *[caseNo];
        for (int i = 0; i < caseNo; i++)
            arr[i] = new int[50];

        //Inporting file with format: n, k, data......
        for (int i = 0; i < caseNo; i++)
        {
            for (int j = 0; j < 2; j++)
                data_input >> arr[i][j];
            for (int j = 2; j < arr[i][0] + 2; j++)
                data_input >> arr[i][j];
        }

        //Find minDiff
        for (int i = 0; i < caseNo; i++)
            printOutput(i + 1, findMinDifference(arr[i] + 2, arr[i][0], arr[i][1]));

        for (int i = 0; i < caseNo; i++)
            delete[] arr[i];
        delete[] arr;
    }

    //Runs if file is not found
    else
    {
        perror("Error");
        exit(1);
    }

    data_input.close();
    return 0;
}