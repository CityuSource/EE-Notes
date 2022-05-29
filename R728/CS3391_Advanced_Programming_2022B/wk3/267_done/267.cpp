#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int steps;

void flood(vector<vector<int>> &check, int x, int y)
{
    if (!check[x][y])
        return;

    check[x][y] = 0;
    steps++;
    flood(check, x + 1, y);
    flood(check, x - 1, y);
    flood(check, x, y + 1);
    flood(check, x, y - 1);
}

int main()
{
    int n, m, k;
    while (cin >> n >> m >> k)
    {
        vector<vector<int>> check(105, vector<int>(105, 0));
        for (int i, j; k--;)
        {
            cin >> i >> j;
            check[i][j] = 1;
        }

        int result = 0;

        for (auto i = 1; i <= n; i++)
            for (auto j = 1; j <= m; j++)
            {
                if (check[i][j])
                    steps = 0, flood(check, i, j);
                if (result < steps)
                    result = steps;
            }
        cout << result << endl;
    }
}