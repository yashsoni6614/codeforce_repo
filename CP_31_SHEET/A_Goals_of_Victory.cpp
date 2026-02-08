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
       vector <int> v(n,0);
       for(int i = 0; i<n-1; i++){
           cin>>v[i];
       }
       int sum = 0;
       for(auto&x:v) {
        sum+=x;
       }
       cout<<-1*sum<<endl;
        
    }
    return 0;
}