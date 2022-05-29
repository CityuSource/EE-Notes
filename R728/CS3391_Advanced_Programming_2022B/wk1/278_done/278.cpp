#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <iomanip>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int N[1000];
    int tasks;

    cin >> tasks;

    for (; tasks != 0; tasks--)
    {
        int studCount, sum = 0, result = 0;
        cin >> studCount;

        for (auto i = 0; i < studCount; i++)
        {
            cin >> N[i];
            sum += N[i];
        }
        int average = sum / studCount;

        for (auto i = 0; i < studCount; i++)
            if (N[i] > average)
                result++;

        double output = result * 1.0 / studCount * 100.0;
        cout << fixed << setprecision(3) << output << "%" << endl;
    }
}