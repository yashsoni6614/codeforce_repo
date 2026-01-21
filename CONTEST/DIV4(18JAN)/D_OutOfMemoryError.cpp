//I WASNT ABLE TO SOLVE THIS PROBLEM 

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
        int n, m, h;
        cin >> n >> m >> h;
        vector<int> v(n , 0);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        unordered_map<int,ll>map;
        for(int i = 0;i<m;++i) {
            int b,c;
            cin>>b>>c;
            int idx = b-1;
            ll l= v[idx]+map[idx]+c;
            if(l>h) {
                map.clear();
            }
            else {
                map[idx]+=c;
            }
            
        }
       for(int i = 0 ;i<n;++i) {
        cout<<v[i]+map[i]<<" ";
       }
       cout<<endl;
       
    }
    return 0;
}