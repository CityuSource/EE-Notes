#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
#define maxs 550
using namespace std;
int pre[maxs];
int m, k;
int s, p;
double dis[maxs * maxs];
struct node ///各个哨所的坐标
{
    int x;
    int y;
} a[maxs];
struct edge ///哨所之间联系构成边
{
    int u;
    int v;
    double w;
} edges[maxs * maxs];
bool my_cmp(edge a, edge b)
{
    return a.w < b.w;
}
bool my_cmp2(double a, double b)
{
    return a > b;
}
double Getdis(node a, node b) ///获得各个边的距离
{
    return sqrt(1.0 * (a.x - b.x) * (a.x - b.x) + 1.0 * (a.y - b.y) * (a.y - b.y));
}
int Find(int x)
{
    if (x != pre[x])
    {
        pre[x] = Find(pre[x]);
    }
    return pre[x];
}
void Union(int a, int b)
{
    int x = Find(a);
    int y = Find(b);
    if (x > y)
    {
        pre[x] = y;
    }
    else
    {
        pre[y] = x;
    }
}
void Kruskal()
{
    memset(dis, 0.0, sizeof(dis));
    int i, counts;
    counts = 0;
    for (i = 1; i <= m; i++)
    {
        int fx = Find(edges[i].u);
        int fy = Find(edges[i].v);
        if (fx != fy)
        {
            pre[fx] = fy;
            counts++;
            dis[counts] = edges[i].w;
            if (counts == p - 1) /// p个点，p-1条边
            {
                break;
            }
        }
    }
    sort(dis + 1, dis + counts + 1, my_cmp2);
    printf("%.2f\n", dis[s]); ///最小的D为所有边中排除前S大后最大的那一个
}
int main()
{
    int t, i, j;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d%d", &s, &p);
        for (i = 1; i <= p; i++)
        {
            pre[i] = i;
        }
        m = 0;
        for (i = 1; i <= p; i++)
        {
            scanf("%d%d", &a[i].x, &a[i].y);
        }
        for (i = 1; i <= p; i++)
        {
            for (j = i + 1; j <= p; j++)
            {
                m++;
                edges[m].u = i;
                edges[m].v = j;
                edges[m].w = Getdis(a[i], a[j]);
            }
        }
        sort(edges + 1, edges + m + 1, my_cmp);
        Kruskal();
    }
    return 0;
}