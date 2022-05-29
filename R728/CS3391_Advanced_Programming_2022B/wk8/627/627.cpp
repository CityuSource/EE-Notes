#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>
#include <string>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
using namespace std;

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);

    int n;
    while (cin >> n)
    {
        vector<string> list;
        string t1, t2;
        while (n--)
        {
            cin >> t1;
            t2 = t1;
            reverse(t1.begin(), t1.end());
            if (find(list.begin(), list.end(), t1) != list.end())
                list.erase(remove(list.begin(), list.end(), t1), list.end());
            else
                list.push_back(t2);
        }

        cout << list.size() << endl;
    }
}