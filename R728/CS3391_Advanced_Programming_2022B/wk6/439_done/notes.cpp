#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <cstring>
#include <vector>
#include <cmath>
#include <string>
#include <cstdio>
#include <climits>
using namespace std;
// uva 11258
typedef long long ll;
const int maxn = 210;
const ll inf = 2147483647;
string str;
ll arr[maxn][maxn];
int t;
int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    ios::sync_with_stdio(false);
    cin >> t;
    while (t--)
    {
        cin >> str;
        memset(arr, 0, sizeof(arr));
        int n = str.size();
        for (int i = 0; i < n; i++)
        {
            arr[i][i] = str[i] - '0';
        }
        for (int i = 1; i <= n; i++)
        {
            for (int j = 0; j < n - i + 1; j++)
            {
                ll t = j + i - 1;

                if (i > 10)
                    arr[j][t] = -1;
                else
                {
                    string sb = str.substr(j, i);
                    ll tmp = stoll(sb);
                    if (tmp > inf)
                        arr[j][t] = -1;
                    else
                        arr[j][t] = tmp;
                }
                for (int k = j; k < t; k++)
                {
                    arr[j][t] = max(arr[j][t], arr[j][k] + arr[k + 1][t]);
                }
            }
        }
        cout << arr[0][n - 1] << endl;
    }
    return 0;
}