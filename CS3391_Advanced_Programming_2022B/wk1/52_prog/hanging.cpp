#include <iostream>
#include <vector>
#include <map>
#include <cstdio>
using namespace std;
// ucf local contest 2012
typedef vector<int> VI;

int T, N;
VI in;
map<int, int> pos;

int unb;
int res;

void updateResult(int nunb, int nres)
{
    if (nunb > unb)
    {
        unb = nunb;
        res = nres;
    }
    else if (nunb == unb)
    {
        if (pos[nres] < pos[res])
            res = nres;
    }
}

int go(VI v)
{
    if (v.size() == 0)
    {
        return 0;
    }
    if (v.size() == 1)
    {
        updateResult(0, v[0]);
        return 1;
    }
    VI small, large;
    for (int i = 1; i < v.size(); ++i)
    {
        if (v[i] < v[0])
            small.push_back(v[i]);
        else
            large.push_back(v[i]);
    }
    int d1 = go(small);
    int d2 = go(large);
    int d3 = d1 - d2;
    if (d3 < 0)
        d3 = -d3;
    updateResult(d3, v[0]);
    int ret = d1 > d2 ? d1 : d2;
    return ret + 1;
}

int main()
{
    int i, j;
    freopen("input.in", "r", stdin);
    freopen("model_output.out", "w", stdout);
    cin >> T;
    for (int flock = 1; flock <= T; ++flock)
    {
        cin >> N;
        in.resize(N);
        pos.clear();
        for (i = 0; i < N; ++i)
        {
            cin >> in[i];
            pos[in[i]] = i;
        }
        unb = -1;
        res = -1;
        go(in);
        printf("Flock #%d: %d\n\n", flock, res);
    }
    return 0;
}
