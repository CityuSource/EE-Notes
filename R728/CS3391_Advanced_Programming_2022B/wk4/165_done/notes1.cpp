#include <iostream>
#include <cstring>
#include <cmath>
#define INF 200005
using namespace std;
int n, vis[205], x[205], y[205], t2, cnt = 1;
double distlist[205], dist[205][205], t1;
double dis(int x1, int x2, int y1, int y2)
{
    double a = pow(1.0 * (x1 - x2), 2), b = pow(1.0 * (y1 - y2), 2);
    return sqrt(a + b);
}
int main()
{
    freopen("input.in", "r", stdin);
    freopen("moutput.out", "w", stdout);
    while (cin >> n)
    {
        if (!n)
            break;
        memset(vis, 0, sizeof(vis));
        for (int i = 1; i <= n; i++)
            scanf("%d %d", &x[i], &y[i]);
        for (int i = 1; i <= n; i++)
            for (int j = 1; j <= n; j++)
                dist[i][j] = dis(x[i], x[j], y[i], y[j]);
        for (int i = 1; i <= n; i++)
            distlist[i] = dist[1][i];
        vis[1] = 1;
        for (int i = 1; i <= n; i++)
        {
            t1 = INF;
            for (int j = 2; j <= n; j++)
                if (!vis[j] && t1 > distlist[j])
                    t1 = distlist[j], t2 = j;
            vis[t2] = 1;
            for (int j = 1; j <= n; j++)
                if (!vis[j])
                    distlist[j] = min(distlist[j], max(distlist[t2], dist[t2][j]));
        }
        printf("Scenario #%d\nFrog Distance = %.3lf\n\n", cnt++, distlist[2]);
    }
    return 0;
}