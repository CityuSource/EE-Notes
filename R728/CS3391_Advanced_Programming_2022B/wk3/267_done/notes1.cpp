/* POJ 3620 Avoid The Lakes, http://poj.org/problem?id=3620 */
#include <cstdio>
#include <string>
#include <cstring>

/* N, M最大值是100，加一圈0可以防止越界 */
#define MAX 102

int N, M, K;
int map[MAX][MAX];

int count;

void dfs(int x, int y)
{
    /* 加一圈0可以防止越界，因此不需要判断是否越界 */
    if (map[x][y] == 0)
        return;

    map[x][y] = 0; /* 标记(x,y)已访问过，起到去重作用 */
    count++;
    dfs(x + 1, y);
    dfs(x - 1, y);
    dfs(x, y + 1);
    dfs(x, y - 1);
}

int main()
{
    int i, j, max;
    memset(map, 0, sizeof(map));
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    scanf("%d%d%d", &N, &M, &K);
    while (K--)
    {
        scanf("%d%d", &i, &j);
        map[i][j] = 1;
    }

    max = 0;
    for (i = 1; i <= N; i++)
    {
        for (j = 1; j <= M; j++)
        {
            if (map[i][j] == 1)
            {
                count = 0;
                dfs(i, j);
            }
            if (count > max)
                max = count;
        }
    }
    printf("%d\n", max);
    return 0;
}