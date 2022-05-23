#include <iostream>
#include <string.h>
#include <algorithm>
#include <math.h>
#include <stdio.h>
using namespace std;
#define eps 1e-8
struct Point
{
    double x, y;
};
struct Segment
{
    Point a, b;
};
int dblcmp(double d)
{
    return fabs(d) <= eps ? 0 : d > 0 ? 1
                                      : -1;
}
double det(double x1, double y1, double x2, double y2)
{
    return x1 * y2 - x2 * y1;
}
double cross(Point a, Point b, Point c)
{
    return det(b.x - a.x, b.y - a.y, c.x - a.x, c.y - a.y);
}
int xyCmp(double p, double mini, double maxi)
{
    return dblcmp(p - mini) * dblcmp(p - maxi);
}
int betweenCmp(Point a, Point b, Point c)
{
    if (fabs(b.x - c.x) > fabs(b.y - c.y))
    {
        return xyCmp(a.x, min(b.x, c.x), max(b.x, c.x));
    }
    else
    {
        return xyCmp(a.y, min(b.y, c.y), max(b.y, c.y));
    }
}
int segcross(Point a, Point b, Point c, Point d)
{
    double s1, s2, s3, s4;
    int d1, d2, d3, d4;
    d1 = dblcmp(s1 = cross(a, b, c));
    d2 = dblcmp(s2 = cross(a, b, d));
    d3 = dblcmp(s3 = cross(c, d, a));
    d4 = dblcmp(s4 = cross(c, d, b));
    if ((d1 ^ d2) == -2 && (d3 ^ d4) == -2)
    {
        return 1;
    }
    if (d1 == 0 && betweenCmp(c, a, b) <= 0 ||
        d2 == 0 && betweenCmp(d, a, b) <= 0 ||
        d3 == 0 && betweenCmp(a, c, d) <= 0 ||
        d4 == 0 && betweenCmp(b, c, d) <= 0)
        return 1;
    return 0;
}
int pre[1005];
void UFSet(int n)
{
    for (int i = 1; i <= n; i++)
    {
        pre[i] = i;
    }
}
int find(int x)
{
    if (x == pre[x])
        return x;
    else
        return pre[x] = find(pre[x]);
}
void Union(int x, int y)
{
    pre[find(x)] = find(y);
}
int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    int n, i, j;
    Segment seg[1005];
    while (scanf("%d", &n) == 1 && n)
    {
        for (i = 1; i <= n; i++)
        {
            scanf("%lf%lf%lf%lf", &seg[i].a.x, &seg[i].a.y, &seg[i].b.x, &seg[i].b.y);
        }
        UFSet(n);
        for (i = 1; i <= n; i++)
        {
            for (j = 1; j <= n; j++)
            {
                if (j == i)
                    continue;
                if (segcross(seg[i].a, seg[i].b, seg[j].a, seg[j].b) == 1)
                {
                    Union(j, i);
                }
            }
        }
        int a, b;
        while (scanf("%d%d", &a, &b) == 2)
        {
            if (a == 0 && b == 0)
                break;
            if (find(a) == find(b))
            {
                printf("CONNECTED\n");
            }
            else
            {
                printf("NOT CONNECTED\n");
            }
        }
    }
    return 0;
}