#include <iostream>
#include <stdio.h>
#include <cstdio>
#include <stdlib.h>
#include <cstring>
#include <string>
#include <vector>
#include <cmath>
#include <climits>
#include <algorithm>
#include <queue>
using namespace std;

struct Node
{
    int dst, wgt;
    bool operator<(const Node &s) const
    {
        return s.wgt < wgt;
    }
};

int prim(vector<vector<int>> &check, int n)
{
    vector<int> vis(105, 0), dis(105, INT_MAX);
    priority_queue<Node> q;
    q.push({1, 0});
    int result = 0, dst;
    while (!q.empty())
    {
        Node tempNode = q.top();
        q.pop();
        dst = tempNode.dst;

        if (vis[dst])
            continue;

        result += tempNode.wgt;
        vis[dst] = 1;
        for (auto i = 1; i <= n; i++)
        {
            int wgt = check[dst][i];
            if (!vis[i] && dis[i] > wgt)
                dis[i] = wgt, q.push({i, dis[i]});
        }
    }
    return result;
}

int main()
{
    int p, r;
    while (cin >> p)
    {
        if (!p)
            break;
        cin >> r;

        if (!r)
        {
            cout << 0 << endl;
            continue;
        }

        vector<vector<int>> check(105, vector<int>(105, INT_MAX));
        for (int i, j, k; r--;)
        {
            cin >> i >> j >> k;
            if (check[i][j] > k)
                check[i][j] = check[j][i] = k;
        }

        cout << prim(check, p) << endl;
    }
}