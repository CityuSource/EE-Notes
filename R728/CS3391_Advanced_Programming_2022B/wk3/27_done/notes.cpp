#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// ipsc 2012 problem G
unsigned long long m, a, b, c;
inline unsigned long long f(unsigned long long x) { return (a * x * x + b * x + c) % m; }

void solve()
{
	cin >> a >> b >> c >> m;
	vector<int> L(m, -1);
	for (unsigned i = 0; i < L.size(); ++i)
	{
		if (L[i] >= 0)
			continue;
		unsigned long long p = i;
		unsigned long long plen = 0; // length of a path
		while (L[p] == -1)
		{
			L[p] = -2;
			plen++;
			p = f(p);
		}
		if (L[p] >= 0)
			plen += L[p];
		long long clen = 0; // length of a cycle
		while (L[p] == -2)
		{
			L[p] = -3;
			p = f(p);
			clen++;
		}
		p = i;
		while (L[p] < 0)
		{
			if (L[p] == -3)
				L[p] = clen;
			if (L[p] == -2)
				L[p] = plen--;
			p = f(p);
		}
	}
	cout << *max_element(L.begin(), L.end()) << endl;
}

int main()
{
	int t;
	for (cin >> t; t > 0; t--)
		solve();
}
