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
    int mindif = INT_MAX;
    int temp;
    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            if (arr[j] > arr[j - 1])
            {
                temp = arr[j];
                arr[j] = arr[j - 1];
                arr[j - 1] = temp;
            }
        }
    }
    /*  int ncrN=0, ncrR=0,ncrK=0;
    for (int i = 0; i < n; i++) {
        ncrN *= (n - i);
    }
    for (int i = 0; i < k; i++) {
        ncrK *= (k - i);
    }
    for (int i = 0; i < n-k; i++) {
        ncrR *= (n-k - i);
    }

    int ncr = (ncrN) / (ncrK*(ncrR)); //eg n=4,k=3 then ncr=4*/
    int diff;

    for (int i = 0; i < n - k; i++)
    {
        diff = arr[i + k - 1] - arr[i];
        if (mindif > diff)
        {
            mindif = diff;
        }
    }

    return mindif;
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
    ifstream fin;
    int cases;
    fin.open("input.txt");

    if (!fin)
    {
        cout << "input file not found";
        exit(1);
    }
    fin >> cases;

    for (int i = 0; i < cases; i++)
    {
        int N, K;
        fin >> N >> K;
        int *arr = new int(N);
        for (int j = 0; j < N; j++)
        {
            fin >> arr[j];
        }
        int mindiff;
        int k = i + 1;
        mindiff = findMinDifference(arr, N, K);
        printOutput(k, mindiff);
    }
    fin.close();

    return 0;
}