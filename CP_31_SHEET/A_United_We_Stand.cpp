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
        std::sort(v.begin(), v.end()); // sort the array first
        vector<int> b;
        vector<int> c;
        c.push_back(v[n - 1]);
        int i = n - 2;
        for (; i >= 0; --i)
        {
            if (v[i] == v[i + 1])
            {
                c.push_back(v[i]);
            }
            else
            {
                break;
            }
        }
        while (i >= 0)
        {
            b.push_back(v[i]);
            --i;
        }
        if (!b.size() || !c.size())
        {
            cout << -1 << endl;
        }
        else
        {
            cout << b.size() << " " << c.size() << endl;
            for (auto &x : b)
            {
                cout << x << " ";
            }
            cout << endl;
            for (auto &x : c)
            {
                cout << x << " ";
            }
            cout << endl;
        }
    }
    return 0;
}