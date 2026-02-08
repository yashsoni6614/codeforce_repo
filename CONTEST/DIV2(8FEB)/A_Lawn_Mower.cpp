#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int t;
    cin>>t;
    while(t--){
       ll n,w;
       cin>>n>>w;
        ll val = n/w;
        cout<<n-val<<endl;
       
    }
    return 0;
}