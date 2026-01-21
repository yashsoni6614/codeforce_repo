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
       pair<int,int> p;
       int maxval =INT_MIN;
       for(int i = 0; i<n; i++){
        int x;
        cin>>x;
        maxval = max(maxval,x);
         
       }
       //now we are having the array in here
       cout<<maxval*n<<endl;
       
    }
    return 0;
}