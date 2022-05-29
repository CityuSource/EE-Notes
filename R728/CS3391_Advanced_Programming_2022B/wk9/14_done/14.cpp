#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <vector>
using namespace std;

int x, y, d, tempx, tempy;

void gcd(int n, int m)
{
    if (m == 0)
    {
        x = 1, y = 0, d = n;
        return;
    }
    gcd(m, n % m);
    tempx = y, tempy = x - (n / m) * y, x = tempx, y = tempy;
}

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        gcd(n, m);
        printf("%d %d %d\n", x, y, d);
    }
}