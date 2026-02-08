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
        int length{0};
        int i = -1;
        int j = 0;
        while (j < n)
        {

            if (v[j] == 0)
            {
                i = j;
                while (j < n && v[j] == 0)
                {
                    ++j;
                }
                length = max(length,j-i);
            }
            else {
                ++j;
            }
        }
        cout<<length<<endl;
    }
    return 0;
}