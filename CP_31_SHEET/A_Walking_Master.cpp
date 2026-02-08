#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;
        if (d < b)
        {
            cout << -1 << endl;
        }
        else
        {
            long long k = d - b;
            int steps = k;
            if (c > a + k)
            {
                cout << -1 << endl;
            }
            else
            {
                steps = steps + (abs(a + k - c));
                cout << steps << endl;
            }
        }
    }
    return 0;
}