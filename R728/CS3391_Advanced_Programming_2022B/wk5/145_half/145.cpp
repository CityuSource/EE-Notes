#include <iostream>
#include <stdio.h>
#include <set>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

double calDistance(pair<double, double> p1, pair<double, double> p2)
{
    return sqrt(pow(p1.first - p2.first, 2) + pow(p1.second - p2.second, 2));
}

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
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
        sort(points.begin(), points.end());

        vector<double> distances;
        double max = 0;
        for (int i = 0; i < p; i++)
            for (int j = i + 1; j < p; j++)
                distances.push_back(calDistance(points[i], points[j]));

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