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
        string s1, s2;
        int n1, n2;
        cin >> n1 >> n2;
        cin >> s1;
        cin >> s2;
        if (s1.find(s2) != string::npos)
            cout << 0 << endl;
        else
        {
            int i = 1;
            bool flag = false;
            do
            {
                s1.append(s1);
                if (s1.find(s2) != string::npos)
                {
                    cout << i<<endl;
                    flag = true;
                    break;
                }
                else
                {
                    ++i;
                }
            } while ((s1.size() - (n1 - 1)) <= n2);
            
            if(!flag) {
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}