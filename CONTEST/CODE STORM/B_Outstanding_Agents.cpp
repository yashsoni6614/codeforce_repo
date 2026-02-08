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

    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n, vector<int>(m, 0));
    for (int i = 0; i < n; i++)
    {
        int j = 0;
        string s;
        cin >> s;
        for (int k = 0; k < s.length(); ++k)
        {
            v[i][k] = s[k] - '0';
        }
    }
    unordered_set<int> set;
    int ans = 0;
    for (int j = 0; j < m; ++j)
    {
        int max = INT_MIN;
        int count = 0;
        for (int i = 0; i < n; ++i)
        {
            if (max <= v[i][j])
            {
                max = v[i][j];
            }
        }
        for (int i = 0; i < n; ++i)
        {
            if (max == v[i][j])
            {
                set.insert(i);
            }
        }
    }

cout << set.size()<< endl;

return 0;

}