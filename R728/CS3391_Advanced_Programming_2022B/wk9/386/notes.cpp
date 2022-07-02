#include <iostream>
using namespace std;

/* Iterative Function to calculate (x^y)%p in O(log y) */
int power(long long x, unsigned int y, int p)
{
    int res = 1; // Initialize result

    x = x % p; // Update x if it is more than or
               // equal to p

    if (x == 0)
        return 0; // In case x is divisible by p;

    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res * x) % p;

        // y must be even now
        y = y >> 1; // y = y/2
        x = (x * x) % p;
    }
    return res;
}

// Driver code
int main()
{
    freopen("input.in", "r", stdin);
    freopen("output.out", "w", stdout);
    int x, y, p;
    while (cin >> x >> y >> p)
        cout << "Power is " << power(x, y, p) << endl;
    return 0;
}