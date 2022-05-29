#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

vector<uint64_t> convert(uint64_t n)
{
    vector<uint64_t> bin;
    for (auto i = 0; n > 0; i++)
    {
        bin.push_back(n % 2);
        n = n / 2;
    }

    return bin;
}

int main()
{
    ios::sync_with_stdio(false);
    uint64_t first, second;
    while (cin >> first >> second)
    {
        // cout << first << " " << second << endl;
        if (first == second)
            cout << first << endl;
        else
        {
            vector<uint64_t> f = convert(first), s = convert(second);

            while (f.size() != s.size())
            {
                if (f.size() > s.size())
                    s.push_back(0);
                if (f.size() < s.size())
                    f.push_back(0);
            }

            uint64_t temp = 0;
            for (auto i = 0; i < f.size(); i++)
                if (s[i] > f[i])
                    temp = i;

            for (auto i = 0; i <= temp; i++)
                f[i] = 1;

            reverse(f.begin(), f.end());
            uint64_t result = 0;

            for (auto i = 0; i < f.size(); i++)
                result = result * 2 + f[i];

            cout << result << endl;
        }
    }
    return 0;
}
