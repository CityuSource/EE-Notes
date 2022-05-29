#include <iostream>
#include <cstdio>
#include <climits>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, result;
    while (cin >> n)
    {
        vector<vector<int>> input(105, vector<int>(105)), val(105);
        vector<int> arr(105);
        result = -INT_MAX;
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                cin >> input[i][j];

        for (int k = 1; k <= n; k++)
        {
            fill(val.begin(), val.end(), vector<int>(105, 0));
            for (int i = 1; i <= n; i++)
            {
                fill(arr.begin(), arr.end(), 0);
                for (int j = k; j <= n; j++)
                {
                    arr[j] = arr[j - 1] + input[i][j];
                    val[i][j] = max(arr[j], arr[j] + val[i - 1][j]);
                    result = max(result, val[i][j]);
                }
            }
        }
        cout << result << endl;
    }
}