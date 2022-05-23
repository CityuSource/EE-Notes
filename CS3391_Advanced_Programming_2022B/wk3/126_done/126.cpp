#include <iostream>
#include <stdio.h>
#include <cstring>
#include <vector>

using namespace std;

void reinit(vector<vector<int>> &countries)
{
    for (int i = 1; i < 21; i++)
        for (int j = 1; j < 21; j++)
            if (i == j)
                countries[i][j] = 0;
            else
                countries[i][j] = 1000000000;
}

void warshall(vector<vector<int>> &countries, int size)
{
    for (auto k = 1; k < size; k++) // using floyd warshall algo
        for (auto i = 1; i < size; i++)
            for (auto j = 1; j < size; j++)
                if (countries[i][k] + countries[k][j] < countries[i][j])
                    countries[i][j] = countries[i][k] + countries[k][j];
}

void compute()
{
    int n, c, counter = 1;
    // freopen("input.in", "r", stdin);
    // freopen("output.out", "w", stdout);

    while (cin >> n)
    {
        vector<vector<int>> countries(21, vector<int>(21, 0));
        reinit(countries);
        while (n--)
        {
            cin >> c;
            countries[1][c] = 1;
            countries[c][1] = 1;
        }

        for (auto i = 2; i < 20; i++)
        {
            cin >> n;
            while (n--)
            {
                cin >> c;
                countries[i][c] = 1;
                ;
                countries[c][i] = 1;
            }
        }

        warshall(countries, 21);

        cin >> n;
        printf("Test Set #%d\n", counter++);
        for (int i, j; n > 0; n--)
        {
            cin >> i >> j;
            printf("%2d to %2d: %d\n", i, j, countries[i][j]);
        }

        cout << endl;
    }
}

int main()
{
    compute();
}