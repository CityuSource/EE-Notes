#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <cmath>
#include <string>
#include <cstdio>
#include <climits>
using namespace std;
#define ll long long

int askNum()
{
    int result;
    cin >> result;
    return result;
}

string askWord()
{
    string result;
    cin >> result;
    return result;
}

int main()
{
    ios::sync_with_stdio(false);

    int n = askNum(), len;
    while (n--)
    {
        string str = askWord();
        len = str.size();
        vector<ll> arr(210);
        ll t1, t2;
        for (auto i = 0; i < len; i++)
            if (str[i] == '0')
                arr[i + 1] = max(arr[i + 1], arr[i]);
            else
            {
                t1 = 0;
                for (auto j = i; j < len; j++)
                {
                    t1 = t1 * 10 + str[j] - '0';
                    if (t1 > INT_MAX)
                        break;
                    arr[j + 1] = max(arr[j + 1], arr[i] + t1);
                }
            }

        cout << arr[len] << endl;
    }
}