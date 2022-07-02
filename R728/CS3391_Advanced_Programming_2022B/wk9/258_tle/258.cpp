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
#define ll long long

bool repeating(ll num)
{
    for (ll i = -1, j; num > 0;)
    {
        j = num % 10;
        if (j == i)
            return true;
        i = j, num = floor(num / 10);
    }
    return false;
}

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    ll n;
    while (cin >> n)
    {
        while (repeating(++n))
            ;
        cout << n << endl;
    }
}