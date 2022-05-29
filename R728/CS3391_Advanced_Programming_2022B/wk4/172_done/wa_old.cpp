#include <iostream>
#include <iomanip>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
using namespace std;
int graph[500][500];
int dist[500];
bool vis[500];

int minDistance(int edges)
{
    int min = INT_MAX, min_index;

    for (int i = 0; i < edges; i++)
        if (vis[i] == 0 && dist[i] <= min)
            min = dist[i], min_index = i;

    return min_index;
}

void compute(int nodes, int edges, int src)
{
    dist[src] = 0;

    for (int i = 0; i < nodes - 1; i++)
    {
        int u = minDistance(nodes);

        vis[u] = 1;

        for (int j = 0; j < nodes; j++)
        {
            if (!vis[j] && graph[u][j] > 0 && dist[u] + graph[u][j] < dist[j])
            {
                dist[j] = dist[u] + graph[u][j];
            }
        }
    }
}

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);

    int nodes, edges, count = 1;
    while (cin >> nodes >> edges)
    {
        int head, tail;
        memset(graph, 0, sizeof(graph));
        memset(vis, 0, sizeof(vis));
        // first is parent, second is weight;
        for (int i = 0, u, v, cost; i < edges; i++)
        {
            cin >> u >> v >> cost;
            graph[u][v] = cost;
            graph[v][u] = cost;
            if (i == edges - 1)
                head = u, tail = v;
        }

        for (int i = 0, u, v, cost; i < nodes; i++)
            dist[i] = INT_MAX;

        compute(nodes, edges, 0);

        if (dist[head] != INT_MAX && dist[head] > 0)
            printf("Set #%d\n%d\n", count++, dist[head] + graph[head][tail]);
        else
            printf("Set #%d\n?\n", count++);
    }
}