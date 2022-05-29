#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
#define ll long long

bool repeating(ll num)
{
    ll size = trunc(log10(num)) + 1, last = num % 10;
    num /= 10;
    for (ll i = 1; i < size; i++, last = num % 10, num /= 10)
        if (num % 10 == last)
            return true;

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