#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int t;
    cin>>t;
    while(t--){
       int n;
       cin>>n;
       vector <ll> v(n,0);
       ll s=0;
       for(int i = 0; i<n; i++){
           cin>>v[i];
           s+=v[i];
       }
       if(s%3 == 0) {
        cout<<1<<" "<<n-1<<endl;
       }
       else {
        cout<<0<<" "<<0<<endl;
       }
       
    }
    return 0;
}