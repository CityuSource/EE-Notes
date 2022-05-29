// PrimÄ£°å
//ÌâÄ¿Á´½Ó : http://poj.org/problem?id=1287
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <vector>
#include <queue>

using namespace std;
const int maxn = 100 + 10;
const int INF = 1 << 30;

struct Node
{
    int v, w;
    Node() {}
    Node(int v, int w) : v(v), w(w) {}
    bool operator<(const Node &s) const
    {
        return s.w < w;
    }
};

int n, d[maxn];
bool vis[maxn];
int Map[maxn][maxn];

void init()
{
    for (int i = 0; i < maxn; i++)
        vis[i] = false;
    for (int i = 0; i < maxn; i++)
        d[i] = INF;
}

int Prim(int s)
{
    priority_queue<Node> q;
    q.push(Node(s, 0));
    int ans = 0;
    while (!q.empty())
    {
        Node Now = q.top();
        q.pop();
        int v = Now.v;
        if (vis[v])
            continue;
        ans += Now.w;
        vis[v] = true;
        for (int i = 1; i <= n; i++)
        {
            int w2 = Map[v][i];
            if (!vis[i] && d[i] > w2)
            {
                d[i] = w2;
                q.push(Node(i, d[i]));
            }
        }
    }
    return ans;
}

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    int m, a, b, c;
    while (~scanf("%d", &n) && n)
    {
        scanf("%d", &m);
        init();
        for (int i = 1; i <= n; i++)
        {
            Map[i][i] = INF;
            for (int j = 1; j < i; j++)
                Map[i][j] = Map[j][i] = INF;
        }
        for (int i = 0; i < m; i++)
        {
            scanf("%d%d%d", &a, &b, &c);
            if (c < Map[a][b])
                Map[a][b] = Map[b][a] = c;
        }
        printf("%d\n", Prim(1));
    }
    return 0;
}