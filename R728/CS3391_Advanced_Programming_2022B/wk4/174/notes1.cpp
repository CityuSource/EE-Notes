#include <iostream>
#include <sstream>
#include <vector>
#include <climits>
using namespace std;

typedef long long LL;

int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);

    int tc;
    bool newline = false;

    cin >> tc;
    cin.ignore(1, '\n');
    cin.ignore(1, '\n');

    while (tc--)
    {
        string str;
        getline(cin, str);

        stringstream ss(str);
        vector<int> v;
        int temp, n = 0;

        while (!ss.eof())
        {
            ss >> temp;
            v.push_back(temp);
            ++n;
        }

        vector<vector<int>> matrix(n, vector<int>(n, 0));

        for (int i = 0; i < n; ++i)
            matrix[0][i] = (v[i] == -1) ? INT_MAX : v[i];

        for (int i = 1; i < n; ++i)
        {
            for (int j = 0; j < n; ++j)
            {
                cin >> temp;
                matrix[i][j] = (temp == -1) ? INT_MAX : temp;
            }
        }

        vector<int> passingTax(n, 0);
        for (int i = 0; i < n; ++i)
            cin >> passingTax[i];

        vector<vector<int>> next(n, vector<int>(n, 0));

        for (int i = 0; i < n; ++i)
            for (int j = 0; j < n; ++j)
                next[i][j] = j;

        for (int k = 0; k < n; ++k)
        { // Floyd-Warshall algorithm.
            for (int i = 0; i < n; ++i)
            {
                for (int j = 0; j < n; ++j)
                {
                    if (matrix[i][j] > LL(matrix[i][k]) + LL(matrix[k][j]) + passingTax[k])
                    {
                        matrix[i][j] = matrix[i][k] + matrix[k][j] + passingTax[k];
                        next[i][j] = next[i][k];
                    }
                }
            }
        }

        cin.ignore(1, '\n');
        while (getline(cin, str), !str.empty())
        {
            int start, dest;
            stringstream ss(str);
            ss >> start;
            --start;
            ss >> dest;
            --dest;
            temp = start;

            v.clear();
            v.push_back(start);

            while (start != dest)
            {
                start = next[start][dest];
                v.push_back(start);
            }

            start = temp;

            if (newline)
                cout << '\n';
            newline = true;
            cout << "From " << start + 1 << " to " << dest + 1 << " :\nPath: ";

            for (unsigned i = 0; i < v.size(); ++i)
            {
                if (i)
                    cout << "-->";
                cout << v[i] + 1;
            }

            cout << "\nTotal cost : " << matrix[start][dest] << '\n';
        }
    }

    return 0;
}