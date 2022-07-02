#include <iostream>
#include <cstdlib>
#include <cstring>
#include <string>
#include <cmath>
#include <queue>
#include <cstdio>
#include <climits>
using namespace std;

int n = 1, ind = 1, counter = 1;

void computeDist(vector<int> x, vector<int> y, vector<vector<double>> &distance)
{
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= n; j++)
            distance[i][j] = sqrt(pow(1.0 * (x[i] - x[j]), 2) + pow(1.0 * (y[i] - y[j]), 2));
}

int main()
{
    while (cin >> n)
    {
        if (n == 0)
            break;
        vector<int> x(210, 0), y(210, 0), vis(210, 0);
        vector<vector<double>> distance(210, vector<double>(210, 0));
        vector<double> list(210, 0);
        for (int i = 1, t1, t2; i <= n; i++)
            cin >> x[i] >> y[i];

        computeDist(x, y, distance);

        // for (auto i : distance[1])
        //     list.push_back(i);
        for (int i = 1; i <= n; i++)
            list[i] = distance[1][i];

        vis[1] = 1;
        double temp;
        for (auto i = 1; i <= n; i++)
        {
            temp = TMP_MAX;
            for (int j = 2; j <= n; j++)
            {
                if (temp > list[j] && !vis[j])
                    ind = j, temp = list[j];
            }
            vis[ind] = 1;

            for (int j = 1; j <= n; j++)
            {
                if (!vis[j])
                    list[j] = min(list[j], max(list[ind], distance[ind][j]));
            }
        }
        printf("Scenario #%d\nFrog Distance = %.3lf\n\n", counter++, list[2]);
    }
}