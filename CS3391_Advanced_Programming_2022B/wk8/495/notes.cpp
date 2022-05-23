#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
using namespace std;

// computes the hash value of the input string s
long long compute_hash(string s)
{
    const int p = 31;      // base
    const int m = 1e9 + 9; // large prime number
    long long hash_value = 0;
    long long p_pow = (long long)pow(p, s.length() - 1);
    for (char c : s)
    {
        hash_value = (hash_value + (c - 'a') * p_pow) % m;
        p_pow = (p_pow / p);
    }
    return hash_value;
}
// finds the hash value of next substring given nxt as the ending character
// and the previous substring prev
long long rolling_hash(long long H, string prev, char nxt)
{
    const int p = 31;
    const int m = 1e9 + 9;
    long long Hnxt = ((H - (prev[0] - 'a') * (long long)pow(p, prev.length() - 1)) * p + (nxt - 'a')) % m;
    return Hnxt;
}

bool isSubstring(string str1, string str2)
{
    int j = 0;
    string prev = str1.substr(j, str2.length());
    j++;
    map<long long, int> m1, m2;
    long long h2 = compute_hash(str2);
    // map 1 to the hash-value corresponding to str2
    m2[h2] = 1;
    long long h1 = compute_hash(prev);
    // map 1 to the hash-values corresponding to all
    // substrings of str1
    m1[h1] = 1;
    for (int i = str2.length(); i < str1.length(); i++)
    {
        h1 = rolling_hash(h1, prev, str1[i]);
        m1[h1] = 1;
        // finds previously considered substring
        prev = str1.substr(j, str2.length());
        j++;
    }
    // if str2 isn't a substring of str1 returns 0 else 1
    return m1[h2] == m2[h2];
}
int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    int n, m;
    string str1, str2;
    cin >> n;

    while (n--)
    {
        cin >> str1 >> m;
        while (m--)
        {
            cin >> str2;
            if (isSubstring(str1, str2))
                cout << "Yes\n";
            else
                cout << "No\n";
        }
    }
    return 0;
}