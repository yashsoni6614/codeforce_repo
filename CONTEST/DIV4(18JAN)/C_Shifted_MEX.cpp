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
        sort(v.begin(), v.end());
        int k = -1 * v[0];
        for (int i = 0; i < n; ++i)
        {
            if (i != n - 1)
            {
                if (v[i] + 1 == v[i + 1] || v[i] == v[i + 1])
                {
                    continue;
                }
                else
                {
                    cout << v[i] + k +1 << endl;
                    break;
                }
            }
            else {
                cout<<v[i]+k+1<<endl;
            }
        }
    }
    return 0;
}