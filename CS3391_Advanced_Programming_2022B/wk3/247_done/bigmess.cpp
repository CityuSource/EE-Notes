#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstdio>
#include <cstring>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;

struct point
{
    int x, y;
};

bool inside(int x, int y, int n, int m)
{
    return x >= 0 && y >= 0 && x < n && y < m;
}

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    int direction[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
    int tasks, n, m;
    cin >> tasks;

    while (tasks--)
    {
        vector<string> map(1005);
        vector<vector<int>> fire(1005, vector<int>(1005)), joe(1005, vector<int>(1005));
        int out, count;
        string temp;
        queue<point> f, je;

        cin >> n >> m;

        for (int i = 0; i < n; i++)
        {
            cin >> temp;
            map[i] = temp;
        }
        out = 0;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (map[i][j] == 'F')
                    f.push({i, j}), fire[i][j] = 0;
                else
                    fire[i][j] = -1;

        for (int i = 0; i < n; i++)
            for (int j = 0; j < m; j++)
                if (map[i][j] == 'J')
                    je.push({i, j}), joe[i][j] = 0;
                else
                    joe[i][j] = -1;

        point pi, pee;

        while (!f.empty())
        {
            pi = f.front();
            f.pop();

            for (int i = 0; i < 4; i++)
            {
                pee.x = pi.x + direction[i][0], pee.y = pi.y + direction[i][1];

                if (inside(pee.x, pee.y, n, m) && map[pee.x][pee.y] != '#' && fire[pee.x][pee.y] == -1)
                    fire[pee.x][pee.y] = fire[pi.x][pi.y] + 1, f.push(pee);
            }
        }

        while (!je.empty())
        {
            pi = je.front();
            je.pop();

            for (int i = 0; i < 4; i++)
            {
                pee.x = pi.x + direction[i][0], pee.y = pi.y + direction[i][1];

                if (!inside(pee.x, pee.y, n, m))
                {
                    out = 1, count = joe[pi.x][pi.y] + 1;
                    break;
                }

                if (map[pee.x][pee.y] != '#' && (fire[pee.x][pee.y] == -1 || joe[pi.x][pi.y] + 1 < fire[pee.x][pee.y]) && joe[pee.x][pee.y] == -1)
                    joe[pee.x][pee.y] = joe[pi.x][pi.y] + 1, je.push(pee);
            }
            if (out)
                break;
        }

        if (out)
            cout << count << endl;
        else
            cout << "IMPOSSIBLE\n";
    }
}