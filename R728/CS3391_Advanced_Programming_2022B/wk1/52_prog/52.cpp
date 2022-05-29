#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <cmath>
#include <iomanip>
#include <algorithm>
using namespace std;

int compute(vector<int> input)
{
    if (input.size() == 0)
        return 0;
    if (input.size() == 1)
        return input[0];
}

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);

    // vector<int> results;
    int n, counter = 0;
    cin >> n;
    while (counter < n)
    {
        int count, result;
        vector<int> input;
        cin >> count;
        for (int in; count--;)
        {
            cin >> in;
            input.push_back(in);
        }

        result = compute(input);
    }
}