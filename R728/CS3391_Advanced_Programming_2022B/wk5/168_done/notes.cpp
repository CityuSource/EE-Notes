#include <stdio.h>
#include <string.h>
#include <iostream>
#include <algorithm>
using namespace std;
const int MAXN = 55;
const int MAXM = 55 * 55;
const int inf = 0x3f3f3f3f;
struct edge
{
    int u, v, w;
    bool operator<(const edge &s) const
    {
        return s.w > w;
    }
} e[MAXM];
int n, m, f[MAXN];
bool cmp(edge a, edge b)
{
    return a.w < b.w;
}
int getf(int v)
{
    if (f[v] != v)
        return f[v] = getf(f[v]);
    return v;
}
bool merge(int u, int v, int w)
{
    int t1 = getf(u);
    int t2 = getf(v);
    if (t1 != t2)
    {
        f[t2] = t1;
        return true;
    }
    return false;
}
int Kruskal()
{
    int cnt = 0, count_ = 0;
    for (int i = 1; i <= n; i++)
        f[i] = i;
    sort(e, e + m);
    for (int i = 0; i < m && count_ < n - 1; i++)
    {
        if (merge(e[i].u, e[i].v, e[i].w))
        {
            cnt += e[i].w;
            count_++;
        }
    }
    return cnt;
}
int main()
{
    while (scanf("%d", &n), n)
    {
        scanf("%d", &m);
        for (int i = 0; i < m; i++)
            scanf("%d%d%d", &e[i].u, &e[i].v, &e[i].w);
        printf("%d\n", Kruskal());
    }
    return 0;
}