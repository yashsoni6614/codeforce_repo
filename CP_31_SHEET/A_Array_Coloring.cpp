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
        int sum {0};
       for(int i = 0; i<n; i++){
           int x;
           cin>>x;
           sum+=x;
       }
       if(sum%2 == 0) {
        cout<<"YES"<<endl;
       }
       else {
        cout<<"NO"<<endl;
       }

       
    }
    return 0;
}