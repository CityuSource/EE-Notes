#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;
// uva 11624
const int N = 1002;

struct pos
{
    int x, y;
};

int n, m;
int dir[4][2] = {{1, 0}, {-1, 0}, {0, -1}, {0, 1}};
queue<pos> person;
queue<pos> fire;
bool escape;
int times;

inline bool inMaze(int x, int y)
{
    return x >= 1 && x <= n && y >= 1 && y <= m;
}

void BFS_fire(char maze[N][N], vector<vector<int>> &burn)
{
    while (!fire.empty())
        fire.pop();

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (maze[i][j] == 'F')
            {
                fire.push(pos{i, j});
                burn[i][j] = 0;
            }
            else
            {
                burn[i][j] = -1;
            }
        }
    }

    pos n, t;

    while (!fire.empty())
    {
        n = fire.front();
        fire.pop();

        for (int d = 0; d < 4; d++)
        {
            t.x = n.x + dir[d][0];
            t.y = n.y + dir[d][1];

            if (inMaze(t.x, t.y) && maze[t.x][t.y] != '#')
            {
                if (burn[t.x][t.y] == -1)
                {
                    burn[t.x][t.y] = burn[n.x][n.y] + 1;
                    fire.push(t);
                }
            }
        }
    }
}

void BFS_person(char maze[N][N], vector<vector<int>> &burn, vector<vector<int>> &visit)
{
    while (!person.empty())
        person.pop();

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (maze[i][j] == 'J')
            {
                person.push(pos{i, j});
                visit[i][j] = 0;
            }
            else
            {
                visit[i][j] = -1;
            }
        }
    }

    pos n, t;

    while (!person.empty())
    {
        n = person.front();
        person.pop();

        for (int d = 0; d < 4; d++)
        {
            t.x = n.x + dir[d][0];
            t.y = n.y + dir[d][1];

            if (!inMaze(t.x, t.y))
            {
                escape = true;
                times = visit[n.x][n.y] + 1;
                return;
            }

            if (maze[t.x][t.y] != '#' && (burn[t.x][t.y] == -1 || visit[n.x][n.y] + 1 < burn[t.x][t.y]))
            {
                if (visit[t.x][t.y] == -1)
                {
                    visit[t.x][t.y] = visit[n.x][n.y] + 1;
                    person.push(t);
                }
            }
        }
    }
}

int main()
{
    int testcases;
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    scanf("%d", &testcases);
    while (testcases--)
    {
        char maze[N][N];
        // int burn[N][N];
        // int visit[N][N];
        vector<vector<int>> burn(1005, vector<int>(1005)), visit(1005, vector<int>(1005));

        scanf("%d %d", &n, &m);

        for (int i = 1; i <= n; i++)
            scanf("%s", maze[i] + 1);

        escape = false;
        BFS_fire(maze, burn);
        BFS_person(maze, burn, visit);

        if (escape == true)
            printf("%d\n", times);
        else
            printf("IMPOSSIBLE\n");
    }

    return 0;
}