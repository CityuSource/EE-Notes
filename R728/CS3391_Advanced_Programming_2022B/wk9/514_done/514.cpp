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

bool bert(int &x, int &y)
{
    if (x >= 2 && y >= 2)
        x -= 2, y -= 2;
    else if (x >= 1 && y >= 12)
        x -= 1, y -= 12;
    else if (y >= 22)
        y -= 22;
    else
        return false;

    return true;
}

bool kengood(int &x, int &y)
{
    if (y >= 22)
        y -= 22;
    else if (y >= 12 && x >= 1)
        x -= 1, y -= 12;
    else if (x >= 2 && y >= 2)
        x -= 2, y -= 2;
    else
        return false;

    return true;
}

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);

    int x, y;
    while (cin >> x >> y)
    {
        while (1)
        {
            if (!bert(x, y))
            {
                cout << "Kengood" << endl;
                break;
            }
            if (!kengood(x, y))
            {
                cout << "Bert" << endl;
                break;
            }
        }
    }
}