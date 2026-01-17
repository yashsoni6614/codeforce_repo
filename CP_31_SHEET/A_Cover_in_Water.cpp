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
       string s;
       cin>>s;
       int c = 0;
       int maxCount = 0;
       int count = 0;
       for(auto&x : s) {
        if(x == '#') {
            maxCount = max(maxCount,c);
            c = 0;
        }
        else {
            ++c;
            ++count;
        }
       }
       maxCount = max(maxCount,c);
       if(maxCount <=2) {
        cout<<count<<endl;
       }
       else {
        cout<<2<<endl;
       }
       
    }
    return 0;
}

//and then there are some people in here which wont be able to makt the thing in here which wont be able to make the things and then we wont be able to make the sense of these things in here 
//in the end we wont be able to focus on the things 