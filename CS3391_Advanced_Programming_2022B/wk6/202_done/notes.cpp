#include <iostream>
#include <cstdio>
#include <cstring>

using namespace std;
// acm 1146
// uva 108
#define MAX 110
int n, m, k;
int map[MAX][MAX];
int cnt[MAX];
int mval[MAX][MAX];

int ans;
int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    memset(map, 0, sizeof(map));
    memset(cnt, 0, sizeof(cnt));
    memset(mval, 0, sizeof(mval));

    while (cin >> n)
    {
        ans = -INT_MAX;
        for (int i = 1; i <= n; ++i)
        {
            for (int j = 1; j <= n; ++j)
                scanf("%d", &map[i][j]);
        }

        for (int k = 1; k <= n; ++k)
        {
            memset(mval, 0, sizeof(mval));
            for (int i = 1; i <= n; i++)
            {
                memset(cnt, 0, sizeof(cnt));
                for (int j = k; j <= n; ++j)
                {
                    cnt[j] = cnt[j - 1] + map[i][j];
                    mval[i][j] = max(cnt[j], mval[i - 1][j] + cnt[j]);
                    ans = max(ans, mval[i][j]);
                }
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}