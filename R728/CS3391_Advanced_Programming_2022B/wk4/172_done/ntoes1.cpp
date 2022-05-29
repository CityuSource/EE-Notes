#include <iostream>
#include <vector>
#include <set>
#include <utility>
#include <climits>
#include <map>
#include <queue>
using namespace std;
#define f first
#define s second
#define INF 1000000000

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);

    int nodes, edges;
    int test_case = 0;

    while (scanf("%d %d", &nodes, &edges) == 2)
    {
        map<int, vector<pair<int, int>>> routes;
        map<pair<int, bool>, int> dist;

        for (int i = 1; i < nodes; i++)
            dist[{i, false}] = dist[{i, true}] = -INF;
        dist[{0, false}] = 0, dist[{0, true}] = -INF;
        for (int i = 0, u, v, w; i < edges; i++)
        {
            cin >> u >> v >> w;
            routes[u].push_back({v, w});
            routes[v].push_back({u, w});
        }

        priority_queue<pair<pair<int, bool>, int>> q;

        q.push({{0, false}, 0});

        while (!q.empty())
        {
            auto top = q.top();
            q.pop();
            for (auto i : routes[top.s])
                if (dist[{i.f, !top.f.s}] < top.f.f - i.s)
                    dist[{i.f, !top.f.s}] = top.f.f - i.s, q.push({{dist[{i.f, !top.f.s}], !top.f.s}, i.f});
        }

        printf("Set #%d\n", ++test_case);
        if (dist[{nodes - 1, false}] == -INF)
            printf("?\n");
        else
            printf("%d\n", -dist[{nodes - 1, false}]);
    }
}