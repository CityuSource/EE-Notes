#include <iostream>
#include <cstdio>
#include <string>
#include <cstring>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);

    int n, m, index, size, qsize;
    string base, query;
    cin >> n;
    while (n--)
    {
        cin >> base >> m;
        size = base.size();
        while (m--)
        {
            cin >> query;
            qsize = query.size();
            index = 0;
            for (int i = 0; i < size && index < qsize; i++)
                if (base[i] == query[index])
                    index++;

            if (index == qsize)
                cout << "y" << endl;
            else
                cout << "n" << endl;
        }
    }
}