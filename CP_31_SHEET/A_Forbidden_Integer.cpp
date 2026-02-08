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
        int n, k, x;
        cin >> n >> k >> x;
        if (x != 1)
        {
            cout << "YES" << endl;
            cout << n << endl;
            for (int i = 0; i < n; ++i)
            {
                cout << 1 << " ";
            }
            cout << endl;
        }
        else
        { // 1 is not in the range
            if (k > 2)
            {
                cout << "YES" << endl;
                int range = n / 2;
                cout << range << endl;
                if (n % 2 == 0)
                {
                    for (int i = 0; i < range; ++i)
                    {
                        cout << 2 << " ";
                    }
                    cout << endl;
                }
                else
                {
                    for(int i=0;i<range-1;++i) {
                        cout<<2<<" ";
                    }
                    cout<<3<<endl;
                }
            }
            else if(k==2) {
                if(n%2!=0) {
                    cout<<"NO"<<endl;
                }
                else {
                    int range = n/2;
                    cout<<"YES"<<endl<<range<<endl;
                    for(int i=0;i<range;++i) {
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }  
            }
            else {
                cout<<"NO"<<endl;
            }
        }
    }
    return 0;
}