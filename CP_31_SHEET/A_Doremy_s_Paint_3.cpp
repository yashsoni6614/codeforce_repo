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
        unordered_map<int, int> m;
        int a = 0, b = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            if (!i)
            {
                a = x;
                b = x;
            }
            else
            {
                if (x != a)
                {
                    b = x;
                }
            }
            ++m[x];
        }
        if (m.size() > 2)
        {
            cout << "No" << endl;
        }
        else if (m.size() == 2)
        {
            if (abs(m[a] - m[b]) > 1)
            {
                cout << "No" << endl;
            }
            else
            {
                cout << "Yes" << endl;
            }
        }
        else
        {
            cout << "Yes" << endl;
        }
    }
    return 0;
}