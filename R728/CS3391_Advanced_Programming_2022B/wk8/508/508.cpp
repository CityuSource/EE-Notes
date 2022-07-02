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
#define f first
#define s second
#define INF 1000000000

int main()
{

    int n, m, count = 1, result = 0;
    string base, query;
    cin >> n;
    while (n--)
    {
        cin >> base;

        cout << "Case #" << count++ << endl;
        cin >> m;
        while (m--)
        {
            cin >> query;
            result = 0;
            size_t index = 0, last = index;
            while (string::npos != (index = base.find(query, index)))
            {
                result++, index++;
            }

            cout << result << endl;
        }
    }
}