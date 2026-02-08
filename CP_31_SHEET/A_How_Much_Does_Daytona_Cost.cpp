#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int t;
    cin>>t;
    while(t--){
       int n,k;
       bool istrue = false;
       cin>>n>>k;
       vector <int> v(n,0);
       for(int i = 0; i<n; i++){
           cin>>v[i];
       }
       for(int i = 0;i<n;++i) {
        if(v[i]==k) {
            istrue = true;
            break;
        }
       }
       if(istrue) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
       
    }
    return 0;
}