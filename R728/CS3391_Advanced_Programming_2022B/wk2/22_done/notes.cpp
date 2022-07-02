#include <iostream>
#include <vector>
#include <queue>
#include <math.h>
using namespace std;
typedef pair<int, int> pp;
bool flag[10000];
vector<int> adj[10000];

void make_graph()
{
    for (int i = 1001; i < 10000; i++)
    {
        if (flag[i])
            continue;
        for (int j = 0; j < 4; j++)
        {
            int tt = pow(10, j);
            int temp = i;
            int prev, dig, next;
            prev = i / tt;
            dig = prev % 10;
            prev /= 10;
            next = i % tt;
            for (int k = 0; k <= 9; k++)
            {
                if (k == dig)
                    continue;
                int num = prev * tt * 10 + tt * k + next;
                if (!flag[num])
                {
                    adj[i].push_back(num);
                }
            }
        }
    }
}

void compute()
{
    for (int i = 2; i <= 100; i++)
    {
        if (!flag[i])
        {
            for (int j = i + i; j < 10000; j += i)
                flag[j] = true;
        }
    }
    make_graph();
}

int bfs(int x, int y)
{
    if (x == y)
        return 0;
    queue<pp> q;
    bool check[10000];
    for (int i = 0; i < 10000; i++)
        check[i] = false;
    check[x] = true;
    q.push(make_pair(x, 0));
    while (!q.empty())
    {
        pp tt = q.front();
        q.pop();
        vector<int>::iterator ii;
        for (ii = adj[tt.first].begin(); ii != adj[tt.first].end(); ii++)
        {
            if (!check[*ii])
            {
                check[*ii] = true;
                if (*ii == y)
                    return tt.second + 1;
                q.push(make_pair(*ii, tt.second + 1));
            }
        }
    }
    return -1;
}

int main()
{
    compute();
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        scanf("%d%d", &x, &y);
        int val = bfs(x, y);
        if (val == -1)
            printf("Impossible\n");
        else
            printf("%d\n", val);
    }
}