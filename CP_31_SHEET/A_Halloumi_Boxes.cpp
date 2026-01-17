#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int t;
    int n,k;
    cin>>t;
    while(t--){        
       cin>>n>>k;
       vector <int> v(n,0);
       for(int i = 0; i<n; i++){
           cin>>v[i];
       }
       if(k==1) {
        if(is_sorted(v.begin(),v.end())) cout<<"YES\n";
        else cout<<"NO\n";
       }
       else{
       cout<<"YES\n";}
    }
    return 0;
}