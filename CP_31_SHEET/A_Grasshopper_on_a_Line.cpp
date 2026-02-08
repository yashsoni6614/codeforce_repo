#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int t;
    cin>>t;
    while(t--){
       int x,k;
       cin>>x>>k;
       if(x%k != 0) {
        cout<<1<<endl;
        cout<<x<<endl;
       }
       else {
        cout<<2<<endl;
        cout<<x-1<<" "<<1<<endl;
       }
       
       
    }
    return 0;
}