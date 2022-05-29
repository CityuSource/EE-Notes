#include <iostream>
#include <stdio.h>
#include <set>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

#define fast                      \
    ios_base::sync_with_stdio(0); \
    cin.tie(NULL);                \
    cout.tie(NULL)

double calDistance(pair<double, double> p1, pair<double, double> p2)
{
    return sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2));
}

int main()
{
    fast;
    int tasks;
    cin >> tasks;

    while (tasks--)
    {
        int satel, p;
        cin >> satel >> p;
        vector<pair<double, double>> points;
        points.resize(p);
        for (int i = 0; i < p; i++)
        {
            cin >> points[i].first >> points[i].second;
        }

        vector<double> distances;
        double max = 0;
        for (int i = 0; i < p; i++)
            for (int j = 0; j < p; j++)
                if (j != i)
                    distances.push_back(calDistance(points[i], points[j]));
                else
                    continue;

        set<double> s(distances.begin(), distances.end());
        distances.assign(s.begin(), s.end());
        sort(distances.begin(), distances.end(), greater<double>());
        satel *= 2;
        while (satel)
            distances.erase(distances.begin()), satel--;

        max = distances.front();
        cout << max << endl;
    }
}