#include <stdio.h>
#include <string.h>
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
#define INFINITY 10000000
#define LONGEST 50
#define MAXIMUM 220
#define MAXIMUM_PATH 1000
bool isNumber(string tmp)
{
    for (int i = 0; i < tmp.length(); i++)
    {
        if ((int)tmp[i] < 48 || (int)tmp[i] > 57)
            return false;
    }
    return true;
}
int main()
{
    bool isF = true;
    char input[80];
    int n, m;
    string places[MAXIMUM];
    string places_no_spaces[MAXIMUM];

    int maps[MAXIMUM][MAXIMUM];
    int next[MAXIMUM][MAXIMUM];
    while (cin >> n)
    {

        for (int i = 0; i < n; i++)
            for (int j = 0; j < n; j++)
                maps[i][j] = INFINITY;
        int office, hall;
        string line;
        getline(cin, line);
        for (int i = 0; i < n; i++)
        {
            // getline(cin, t);
            getline(cin, line);
            places[i] = line;
            string ttttt;
            for (int j = 0; j < line.length(); j++)
            {
                if (line[j] != ' ')
                    ttttt += line[j];
            }
            places_no_spaces[i] = ttttt;
            if (places[i] == "office")
                office = i;
            if (places[i] == "hall")
                hall = i;
        }
        cin >> m;
        string tmp;
        getline(cin, tmp);
        for (int i = 0; i < m; i++)
        {
            bool isSingle = false;
            int index_i, index_j;
            string source, destination;
            string s_tmp;
            int from = -1, to = -1;
            char *ptr;
            // read input
            getline(cin, tmp);
            // read src
            for (int j = 0; j < tmp.length(); j++)
            {
                if (tmp[j] == ':')
                {
                    source = tmp.substr(0, j);
                    s_tmp = tmp.substr(j + 1);
                    break;
                }
            }
            stringstream myStream(s_tmp);
            string s;
            string remaining[100];
            int t = 0;
            while (myStream >> s)
            {
                remaining[t] = s;
                t++;
            }
            // num of parts: t
            // the last place: t - 1
            // add up until before the last one digits
            int guess;
            string ttt, ttt2;
            for (int j = 0; j < t - 1; j++)
                ttt += remaining[j];
            for (int j = 0; j < n; j++)
            {
                if (places_no_spaces[j] == ttt)
                {
                    isSingle = true;
                    guess = j;
                    break;
                }
            }

            if (isSingle)
            {
                destination = places[guess];
                from = stoi(remaining[t - 1]);
            }
            else
            {
                for (int j = 0; j < t - 2; j++)
                    ttt2 += remaining[j];
                for (int j = 0; j < n; j++)
                {
                    if (places_no_spaces[j] == ttt2)
                    {
                        guess = j;
                        break;
                    }
                }
                destination = places[guess];
                from = stoi(remaining[t - 2]);
                to = stoi(remaining[t - 1]);
            }

            // find the index of the place
            for (int k = 0; k < n; k++)
            {
                if (places[k] == source)
                    index_i = k;
                else if (places[k] == destination)
                    index_j = k;
            }

            if (isSingle)
            {
                maps[index_i][index_j] = from;
                next[index_i][index_j] = index_j;
            }
            if (!isSingle)
            {
                maps[index_i][index_j] = from;
                maps[index_j][index_i] = to;
                next[index_i][index_j] = index_j;
                next[index_j][index_i] = index_i;
            }
        }

        // initialize
        for (int i = 0; i < n; i++)
            maps[i][i] = 0;

        for (int k = 0; k < n; k++)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < n; j++)
                {
                    if (maps[i][k] != INFINITY && maps[k][j] != INFINITY && maps[i][j] > maps[i][k] + maps[k][j])
                    {
                        maps[i][j] = maps[i][k] + maps[k][j];
                        next[i][j] = next[i][k];
                    }
                }
            }
        }

        cout << maps[office][hall] + maps[hall][office] << endl;
        // office -> hall
        int path1[MAXIMUM_PATH];
        int u1 = office;
        int q1 = 0;
        while (u1 != hall)
        {
            path1[q1] = u1;
            u1 = next[u1][hall];
            q1++;
        }
        path1[q1] = hall;

        for (int e = 0; e < q1; e++)
            cout << places[path1[e]] << " -> ";

        // hall -> office
        int path2[MAXIMUM_PATH];
        int u2 = hall;
        int q2 = 0;
        while (u2 != office)
        {
            path2[q2] = u2;
            u2 = next[u2][office];
            q2++;
        }
        path2[q2] = office;

        for (int e = 0; e < q2; e++)
            cout << places[path2[e]] << " -> ";
        cout << "office" << endl
             << endl;
        /*
        for (int i = 0; i <= q; i++)
        cout << path[q] << endl;
        */
    }
    return 0;
}