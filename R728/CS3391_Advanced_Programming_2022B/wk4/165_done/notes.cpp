#include <cmath>
#include <queue>
#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 205;
const int MAXM = 10005;
const int inf = 0x3f3f3f3f;
struct point
{
    int x, y;
} p[MAXN];
bool vis[MAXN];
double mp[MAXN][MAXN], dis[MAXN];
double dist(const point &a, const point &b)
{
    return sqrt(1.0 * (a.x - b.x) * (a.x - b.x) + (a.y - b.y) * (a.y - b.y));
}
double Dijkstra(int s, int t, int n)
{
    for (int i = 1; i <= n; i++)
    {
        dis[i] = inf;
        vis[i] = false;
    }
    dis[s] = 0;
    vis[s] = true;
    for (int i = 1; i < n; i++)
    {
        int min_ = inf, k = s;
        for (int j = 1; j <= n; j++)
            if (!vis[j] && dis[j] < min_)
                min_ = dis[k = j];
        vis[k] = true;
        for (int j = 1; j <= n; j++)
            if (!vis[j] && dis[j] > max(dis[k], mp[k][j])) //这里变了一下
                dis[j] = max(dis[k], mp[k][j]);
    }
    return dis[t];
}
int main()
{
    int n, kase = 0;
    while (scanf("%d", &n), n)
    {
        for (int i = 1; i <= n; i++)
        {
            scanf("%d%d", &p[i].x, &p[i].y);
            for (int j = 1; j < i; j++)
                mp[i][j] = mp[j][i] = dist(p[i], p[j]);
        }
        printf("Scenario #%d\nFrog Distance = %.3f\n\n", ++kase, Dijkstra(1, 2, n));
    }
    return 0;
}