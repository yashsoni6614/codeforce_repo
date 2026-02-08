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
        int n;
        cin >> n;
        vector<int> v(n, 0);
        int minDiff = INT_MAX;
        int lastVal;
        for (int i = 0; i < n; ++i)
        {
            cin >> v[i];
        }
        if (!is_sorted(v.begin(), v.end()))
        {
            minDiff = -2;
        }
        else
        {
            for (int i = 0; i < n; i++)
            {
                

                if (!i)
                {
                    lastVal = v[i];
                }
                else
                {
                    minDiff = min(minDiff, (v[i] - lastVal));
                    lastVal = v[i];
                }
            }
        }

        cout << (minDiff / 2) + 1 << endl;
    }
    return 0;
}