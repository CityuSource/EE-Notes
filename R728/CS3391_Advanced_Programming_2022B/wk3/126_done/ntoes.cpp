#include <stdio.h>
#include <string.h>
#define INF 1000000000
#define N 25
int d[N][N];

void Floy()
{
    int i, j, k;
    for (k = 1; k <= 20; k++)
        for (i = 1; i <= 20; i++)
            for (j = 1; j <= 20; j++)
                if (d[i][j] > d[i][k] + d[k][j])
                    d[i][j] = d[i][k] + d[k][j];
    return;
}
int main()
{
    int T = 0;
    int i, j, n, m, u, v;
    while (scanf("%d", &n) != EOF)
    {
        T++;
        for (i = 1; i <= 20; i++)
            for (j = 1; j <= 20; j++)
                if (i == j)
                    d[i][j] = 0;
                else
                    d[i][j] = INF;

        for (i = 1; i <= n; i++)
        {
            scanf("%d", &v);
            d[1][v] = d[v][1] = 1;
        }

        for (u = 2; u <= 19; u++)
        {
            scanf("%d", &n);
            while (n--)
            {
                scanf("%d", &v);
                d[u][v] = d[v][u] = 1;
            }
        }

        Floy();
        printf("Test Set #%d\n", T);
        scanf("%d", &m); // m给个查询
        for (i = 1; i <= m; i++)
        {
            scanf("%d%d", &u, &v);
            printf("%2d to %2d: %d\n", u, v, d[u][v]);
        }

        printf("\n");
    }
    return 0;
}