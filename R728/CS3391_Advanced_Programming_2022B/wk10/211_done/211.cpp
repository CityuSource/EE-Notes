#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

struct Point
{
    double x, y;
    bool operator<(const Point &a) const
    {
        if (a.x != x)
            return x < a.x;
        else
            return y < a.y;
    }
    Point operator-(Point a)
    {
        return {x - a.x, y - a.y};
    }
} points[100010];

double cross_product(Point o, Point t, Point th)
{
    return (t.x - o.x) * (th.y - o.y) - (t.y - o.y) * (th.x - o.x);
}

double product(Point a, Point b)
{
    return a.x * b.x + a.y * b.y;
}

int det(Point a, Point b)
{
    return a.x * b.y - a.y * b.x;
}

int check(vector<Point> area, int a, int b)
{
    return det(points[a - 1] - points[a - 2], area[b] - area[a - 2]);
}

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    int p, r;
    while (cin >> p)
    {
        vector<Point> area;
        int count = 0;
        for (double t1, t2, i = 0; i < p; i++)
        {
            cin >> t1 >> t2;
            area.push_back({t1, t2});
        }
        sort(area.begin(), area.end());
        for (int i = 0; i < p; i++)
        {
            while (!(check(area, count, i) > 0) && count > 1)
                count--;
            points[count++] = area[i];
        }

        for (int i = p - 2, j = count; i >= 0; i--)
        {
            while (!(check(area, count, i) > 0) && count > j)
                count--;
            points[count++] = area[i];
        }
        Point p;
        cin >> r;
        for (int t1, t2, i = 0; i < r; i++)
        {
            cin >> t1 >> t2;
            p = {(double)t1, (double)t2};
            bool in = 0;
            for (int i = 0; i < count - 1; i++)
            {
                if (det(points[i + 1] - points[i], p - points[i]) < 0)
                {
                    printf("outside\n");
                    in = true;
                    break;
                }
            }
            if (!in)
                printf("inside\n");
        }
    }
}