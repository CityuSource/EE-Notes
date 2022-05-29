#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int n, l, r1, r2, m, z, count = 1;
    double pi = 3.141592653589793;
    cin >> n;
    while (n--)
    {
        scanf("%d %d %d %d %d", &l, &r1, &r2, &m, &z);
        printf("Track #%d: ", count++);
        double mack = (pi * r1 + l) * m * 2.0;
        double zack = (pi * r2 + l) * z * 2.0;
        if (zack > mack)
            printf("I've run %.0f more meters than Mack!!!\n", zack - mack);
        else
            printf("Drats!\n");
    }
}