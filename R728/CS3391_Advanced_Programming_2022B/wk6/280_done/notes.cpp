#include <iostream>
#include <string>
#include <algorithm>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <queue>
#include <map>
#include <stack>
#include <set>
#include <cstdlib>
// poj 2479
using namespace std;

#define LL long long
const int inf = 0x3f3f3f3f;
const int maxn = 5e4 + 5;
int n;
int input[maxn], st[maxn], endd[maxn];
int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    int cas;
    scanf("%d", &cas);
    while (cas--)
    {
        scanf("%d", &n);
        for (int i = 1; i <= n; ++i)
            scanf("%d", &input[i]);
        for (int i = 0; i <= n + 1; ++i)
            st[i] = endd[i] = -inf;
        int temp = -inf, ans = -inf;
        for (int i = 1; i <= n; ++i)
        {
            if (temp >= 0)
                temp += input[i];
            else
                temp = input[i];
            endd[i] = max(endd[i - 1], temp);
        }
        temp = -inf;
        for (int i = n; i >= 1; --i)
        {
            if (temp >= 0)
                temp += input[i];
            else
                temp = input[i];
            st[i] = max(st[i + 1], temp);
        }
        for (int i = 1; i < n; ++i)
            ans = max(ans, endd[i] + st[i + 1]);
        printf("%d\n", ans);
    }
    return 0;
}