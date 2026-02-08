#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;

       ll n,m;
       cin>>n>>m;
       vector <ll> a(n+1,0);
       a[0] = INT_MAX;
       ll sum=0;
       for(ll i = 1; i<=n; i++){
        ll x;
        cin>>x;
        sum+=x;
           cin>>sum;
       }
       for(ll i=0;i<m;++i) {
        ll b,c;
        cin>>b>>c;
        if(b<c) {
            ll sum = 0;
            for(ll j = b;j<c;++j) {
                if(a[j]>a[j+1]) {
                    sum+=(a[j]-a[j+1]);
                }
            }
            cout<<sum<<endl;
        }
        else {
            ll sum=0;
            for(ll j=b;j>c;--j) {
                if(a[j]>a[j-1]) {
                    sum+=(a[j]-a[j-1]);
                }
            }
            cout<<sum<<endl;
        }
       }
       
    
    return 0;
}