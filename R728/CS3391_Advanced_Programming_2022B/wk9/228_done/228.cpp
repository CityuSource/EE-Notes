#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <cmath>
using namespace std;

int main()
{
    int n, count = 1;
    int logger[9] = {-1, 9, 189, 2889, 38889, 488889, 5888889, 68888889, 100000001};
    int base[8] = {1, 10, 100, 1000, 10000, 100000, 1000000, 10000000};
    while (cin >> n)
    {
        int index = 1, digit, result;
        while (n > logger[index])
            index++;
        digit = n - logger[index - 1], result = digit % index, digit /= index;

        if (result > 0)
            if (result == 1)
                result = (digit / base[index - 1]) % 10 + 1;
            else
                result = (digit / base[index - result]) % 10;
        else
            result = (digit - 1) % 10;

        printf("Case %d : %d\n", count++, result);
    }
}