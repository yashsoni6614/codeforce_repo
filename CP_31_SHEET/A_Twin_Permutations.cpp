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
    
       for(int i = 0; i<n; i++){
            int x;
            cin>>x;
           cout<<n+1-x<<" ";
       }
       cout<<endl;
       
    }
    return 0;
}