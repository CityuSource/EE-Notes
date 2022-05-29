#include <iostream>
using namespace std;
long long modular(long long base, long long exp, int mod)
{
    long long res = 1;
    while (exp > 0)
    {
        if (exp % 2 == 1)
            res = (res * base) % mod;
        exp = exp >> 1;
        base = (base * base) % mod;
    }
    return res;
}
int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    long long b, e;
    int mod;
    while (cin >> b >> e >> mod)
        cout << modular(b, e, mod) << endl;
    return 0;
}