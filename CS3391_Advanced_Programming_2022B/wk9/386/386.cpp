#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    long long a, k, result;
    int n;
    while (cin >> a >> k >> n)
    {
        result = 1;
        while (k > 0)
        {
            if (k % 2 == 1)
                result = (result * a) % n;
            k /= 2;
            a = (a * a) % n;
        }
        cout << result << endl;
    }
    return 0;
}