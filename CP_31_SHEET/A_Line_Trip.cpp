#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int t;
    cin>>t;
    while(t--){
       int n,x;
       cin>>n>>x;
       vector <int> v(n,0);
       for(int i = 0; i<n; i++){
           cin>>v[i];
       }
       int maxVal = INT_MIN;
       int prevVal = 0;
       for(int&i : v) {
        maxVal = max(maxVal,(i-prevVal));
        prevVal = i;
       }
       maxVal = max(maxVal,2*(x-prevVal));
       cout<<maxVal<<endl;
    }
    return 0;
}