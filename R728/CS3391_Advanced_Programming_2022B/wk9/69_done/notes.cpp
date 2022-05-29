#include <iostream>
#include <string>
#include <algorithm>
#include <sstream>
#include <cstdlib>
#include <map>
using namespace std;
int main()
{
    string s1, s2;
    int n, cnt;
    while (cin >> cnt >> n && cnt || n)
    {
        map<int, int> mp;
        int CNT = 0;
        while (mp.find(cnt) == mp.end())
        {
            mp.insert(make_pair(cnt, CNT));

            stringstream ss;
            ss << cnt;
            ss >> s1;
            string tmp;
            for (int i = s1.size(); i < n; i++)
                tmp += "0";

            s1 = tmp + s1;
            s2 = s1;
            sort(s1.begin(), s1.end());
            sort(s2.rbegin(), s2.rend());

            cnt = atoi(s2.c_str()) - atoi(s1.c_str());
            CNT++;
        }
        cout << mp[cnt] << " " << cnt << " " << CNT - mp[cnt] << endl;
    }
}