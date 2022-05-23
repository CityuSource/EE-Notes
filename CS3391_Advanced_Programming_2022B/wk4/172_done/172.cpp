#include <iostream>
#include <iomanip>
#include <cstdio>
#include <map>
#include <cstring>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
#include <queue>
using namespace std;
#define INF 1000000000

void dijkstra(map<int, vector<pair<int, int>>> &routes, map<pair<int, bool>, int> &distance)
{
    distance[{0, 0}] = 0, distance[{0, 1}] = -INF;

    priority_queue<pair<pair<int, bool>, int>> q;
    q.push({{0, 0}, 0});

    while (!q.empty())
    {
        pair<pair<int, bool>, int> tempt = q.top();
        q.pop();

        for (auto i : routes[tempt.second])
            if (distance[{i.first, !tempt.first.second}] < tempt.first.first - i.second)
                distance[{i.first, !tempt.first.second}] = tempt.first.first - i.second, q.push({{distance[{i.first, !tempt.first.second}], !tempt.first.second}, i.first});
    }
}

int main()
{
    int nodes, edges, count = 1;
    while (cin >> nodes >> edges)
    {
        map<int, vector<pair<int, int>>> routes;
        map<pair<int, bool>, int> distance;

        for (int i = 1; i < nodes; i++)
            distance[{i, 0}] = distance[{i, 1}] = -INF;

        for (int i = 0, j, k, l; i < edges; i++)
        {
            cin >> j >> k >> l;
            routes[j].push_back({k, l}), routes[k].push_back({j, l});
        }

        dijkstra(routes, distance);
        cout << "Set #" << count++ << endl;
        if (distance[{nodes - 1, false}] == -INF)
            cout << "?" << endl;
        else
            cout << -distance[{nodes - 1, false}] << endl;
    }
}
