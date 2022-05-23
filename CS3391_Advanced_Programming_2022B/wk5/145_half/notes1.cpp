#include <iostream>
#include <cstdio>
#include <string>
#include <cmath>
#include <algorithm>
#include <cstring>
#define maxn 505 * 505
using namespace std;
// uva 10369
struct Node
{
    int x, y;
    double w;
} Edge[maxn];
int pre[maxn], num;
double ans[maxn], xx[maxn], yy[maxn];
int T, s, n;

bool cmp(Node a, Node b)
{
    return a.w < b.w;
}

void init()
{
    for (int i = 0; i < 505; i++)
        pre[i] = i;
    num = 0;
}

void add(int u, int v, double w)
{
    Edge[num].x = u;
    Edge[num].y = v;
    Edge[num++].w = w;
}

double dist(double x1, double y1, double x, double y)
{
    return sqrt((x1 - x) * (x1 - x) + (y1 - y) * (y1 - y));
}

int Find(int x)
{
    if (x != pre[x])
        pre[x] = Find(pre[x]);
    return pre[x];
}

double Kruskal()
{
    int cnt = 0;
    sort(Edge, Edge + num, cmp);
    for (int i = 0; i < num; i++)
    {
        if (Find(Edge[i].x) != Find(Edge[i].y))
        {
            pre[Find(Edge[i].y)] = Find(Edge[i].x);
            ans[cnt++] = Edge[i].w;
        }
    }
    return ans[n - s - 1];
}

int main()
{
    scanf("%d", &T);
    while (T--)
    {
        init();
        scanf("%d%d", &s, &n);
        for (int i = 1; i <= n; i++)
        {
            scanf("%lf%lf", &xx[i], &yy[i]);
        }
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                double zz = dist(xx[i], yy[i], xx[j], yy[j]);
                add(i, j, zz);
            }
        }
        printf("%.2lf\n", Kruskal());
    }
    return 0;
}