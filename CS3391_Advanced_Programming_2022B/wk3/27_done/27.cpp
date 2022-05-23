#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void takeInput(vector<int> &values)
{
    for (int i = 0, push; i < 4; i++)
    {
        cin >> push;
        values.push_back(push);
    }
}

long long calculate(vector<int> values, long long pos)
{
    return (values[0] * pos * pos + values[1] * pos + values[2]) % values[3];
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> values;
        takeInput(values);
        vector<int> result(values[3], -1);

        for (auto i = 0; i < result.size(); i++)
        {
            if (result[i] >= 0)
                continue;

            long long path = 0, pos = i, cycle = 0;

            while (result[pos] == -1)
                result[pos] = -2, pos = calculate(values, pos), path++;

            if (result[pos] >= 0)
                path += result[pos];

            while (result[pos] == -2)
                result[pos] = -3, pos = calculate(values, pos), cycle++;

            pos = i;
            while (result[pos] < 0)
            {
                if (result[pos] == -3)
                    result[pos] = cycle;
                if (result[pos] == -2)
                    result[pos] = path--;
                pos = calculate(values, pos);
            }
        }

        cout << *max_element(result.begin(), result.end()) << endl;
    }
}