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

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        vector<int> v1;
        v1.reserve(2*n);
        int lastVal = v[0];

        v1.push_back(lastVal);

        for (int i = 1; i < n; ++i)
        {
            int minVal = min(v[i], lastVal);
            if (minVal != 1)
            {
                v1.push_back(minVal - 1);
            }
            else {
               if(lastVal != 1) {
                v1.push_back(1);
               }
            }
            v1.push_back(v[i]);
            lastVal = v[i];
        }
        cout << v1.size() << endl;
        for (auto &x : v1)
        {
            cout << x << " ";
        }
        cout << endl;
    }
    return 0;
}