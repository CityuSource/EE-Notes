#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <sstream>
#include <cmath>
#include <map>
#include <algorithm>
using namespace std;

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL);

vector<int> compute(vector<int> arr, int l)
{
    map<int, int> exists;
    vector<int> result;
    reverse(arr.begin(), arr.end());
    stringstream ss;
    for (size_t i = 0; i < arr.size(); ++i)
    {
        ss << arr[i];
    }
    string last = ss.str();
    int count = 0, check = atoi(last.c_str());
    while (exists.find(check) == exists.end())
    {
        exists.insert(make_pair(check, count));
        count++;
        for (int i = last.size(); i < l; i++)
            last += "0";

        string big = last, small = last;

        sort(small.begin(), small.end());
        sort(big.rbegin(), big.rend());

        check = atoi(big.c_str()) - atoi(small.c_str());
        last = to_string(check);
    }

    result.push_back(exists[check]);
    result.push_back(check);
    result.push_back(count - exists[check]);
    return result;
}

int main()
{
    fast;
    int a, l;
    while (cin >> a >> l)
    {
        if (a == 0 & l == 0)
            break;
        vector<int> arr;
        int size = 0, temp = a;
        while (temp != 0)
            temp /= 10, size++;

        for (int i = 0, temp = a; i < l; i++, temp /= 10)
            arr.push_back(temp % 10);

        vector<int> result = compute(arr, l);

        printf("%d %d %d\n", result[0], result[1], result[2]);
    }
}