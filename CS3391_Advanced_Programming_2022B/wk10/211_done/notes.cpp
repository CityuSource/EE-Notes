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
    Point operator-(Point a)
    {
        return {x - a.x, y - a.y};
    }
    bool operator<(const Point &a) const
    {
        return x != a.x ? (x < a.x) : (y < a.y);
    }
} points[100010];

double cross_product(Point &o, Point &t, Point &th)
{
    return (t.x - o.x) * (th.y - o.y) - (t.y - o.y) * (th.x - o.x);
}
double dot_product(Point a, Point b)
{
    return a.x * b.x + a.y * b.y;
}
int det(Point A, Point B)
{
    return A.x * B.y - A.y * B.x;
}
int check(vector<Point> area, int a, int b)
{
    return det(points[a - 1] - points[a - 2], area[b] - points[a - 2]);
}
int main()
{
    int p, r;
    while (cin >> p)
    {
        vector<Point> area;
        int counter = 0;
        for (double i = 0, t1, t2; i < p; i++)
        {
            cin >> t1 >> t2;
            area.push_back({t1, t2});
        }
        sort(area.begin(), area.end());
        for (int i = 0; i < p; i++)
        {
            while (!(check(area, counter, i) > 0) && counter > 1)
                counter--;
            points[counter++] = area[i];
        }
        for (int i = p - 2, j = counter; i >= 0; i--)
        {
            while (!(check(area, counter, i) > 0) && counter > j)
                counter--;
            points[counter++] = area[i];
        }
        cin >> r;
        Point p;
        for (int i = 0, t1, t2, over; i < r; i++)
        {
            cin >> t1 >> t2;
            p = {(double)t1, (double)t2};
            over = 0;
            for (int i = 0; i < counter - 1; i++)
            {
                if (det(points[i + 1] - points[i], p - points[i]) < 0)
                {
                    cout << "outside" << endl;
                    over = 1;
                    break;
                }
            }
            if (!over)
                cout << "inside" << endl;
        }
    }
    return 0;
}