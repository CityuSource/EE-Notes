#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);

    int taskCount = 0;

    cin >> taskCount;

    vector<string> results;
    for (; taskCount != 0; taskCount--)
    {
        vector<int> credit;
        credit.resize(4);
        for (auto i = 0; i < 4; i++)
            cin >> credit[i];

        vector<int> digits;
        for (auto i = 0; i < credit.size(); i++)
        {
            digits.push_back((credit[i] / 1000) * 2);
            digits.push_back(((credit[i] / 10) % 10) * 2);
        }

        int sum = 0;
        for (auto i : digits)
        {
            sum += i / 10;
            sum += i % 10;
        }

        for (auto i = 0; i < credit.size(); i++)
        {
            sum += (credit[i] / 100) % 10;
            sum += credit[i] % 10;
        }

        if (sum % 10 == 0)
            results.push_back("Valid");
        else
            results.push_back("Invalid");
    }

    for (auto i : results)
        cout << i << endl;
}