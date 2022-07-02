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

int main()
{
    int t, n, temp, result, INF = 100000000;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int> input(50005, 0), start(50005, -INF), endd(50005, -INF);
        for (int i = 1; i <= n; i++)
            cin >> input[i];
        result = temp = -INF;
        for (int i = n; i >= 1; i--)
            temp >= 0 ? temp += input[i] : temp = input[i], start[i] = max(start[i + 1], temp);
        temp = -INF;
        for (int i = 1; i <= n; i++)
            temp >= 0 ? temp += input[i] : temp = input[i], endd[i] = max(endd[i - 1], temp);
        for (int i = 1; i < n; ++i)
            result = max(result, endd[i] + start[i + 1]);
        printf("%d\n", result);
    }
    return 0;
}