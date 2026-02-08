#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);

int main() {
    fast;
    int t;
    cin>>t;
    while(t--){
     
        vector<vector<char>>v(10,vector<char>(10));
        for(int i = 0;i<10;++i) {            
            for(int j = 0;j<10;++j) {
                cin>>v[i][j];
            }
        }
        int k = 0;
        int score = 0;
        while(k<5) {
            int i = k+1;
            int j = k;
            while(j<=9-k){
                if(v[k][j] == 'X') {
                    score+=k+1;
                }
                if(v[9-k][j] == 'X') {
                    score+=k+1;
                }
                ++j;
            }
            while(i<9-k) {
                if(v[i][k] == 'X') {
                    score+=k+1;
                }
                if(v[i][9-k] == 'X') {
                    score+=k+1;
                }
                ++i;
            }
            ++k;
        }
        cout<<score<<endl;
       
    }
    return 0;
}

//this is the alternate and better solution and easier to understand than mine 

// My solution: I assume its short and sweet:

//     f (0, n){ // for (int i = 0; i < n; i++) 

//         for (int j = 0; j < n; j ++){



//             if(v[i][j]=='X') {



//                 if (i == 0 or i == 9 or j == 0 or j == 9)ans+=1;

//                 else if (i == 1 or j == 1 or i == 8 or j == 8) ans+=2;

//                 else if (i == 2 or j == 2 or i == 7 or j == 7) ans+=3;

//                 else if (i == 3 or j == 3 or i == 6 or j == 6) ans+=4;

//                 else if (i == 4 or j == 4 or i == 5 or j == 5)ans+=5;

//             }

//         }



//     }

