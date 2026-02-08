#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
       int n;
       cin>>n;
       int minVal = INT_MAX;
       for(int i = 0; i<n; i++){
            int x;
           cin>>x;
            minVal = min(minVal,abs(x));
       }
       cout<<minVal<<endl;
       
       
    return 0;
}