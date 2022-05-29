#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <sstream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <map>
#include <iterator>
using namespace std;

double defprice, check;
int main()
{
    // freopen("input.in", "r", stdin);
    int n, casecount = 1;
    // cin >> defprice;
    while (cin >> defprice >> n)
    {
        map<int, double> checker;
        vector<int> skipper;
        for (int i = 0, t1; i < n; ++i)
        {
            double t2;
            cin >> t1 >> t2;
            check = defprice * (double)t1;
            if (check < t2)
                checker.insert(pair<int, double>(t1, check)), skipper.push_back(t1);
            else if (checker.find(t1) == checker.end())
                checker.insert(pair<int, double>(t1, t2)), skipper.push_back(t1);
            else if (checker[t1] > t2)
                checker[t1] = t2;
        }
        string temp;
        cin.clear();
        cin.sync();
        getline(cin, temp);
        sort(skipper.begin(), skipper.end(), greater<int>());
        skipper.erase(unique(skipper.begin(), skipper.end()), skipper.end());

        printf("Case %d:\n", casecount++);
        int query, divisor, leftover, index;
        vector<double> compare;
        for (auto i : temp)
        {
            if (i != ' ')
            {
                query = i = '0';
            }
        }
    }
}