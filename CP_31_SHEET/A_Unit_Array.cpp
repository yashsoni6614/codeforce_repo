#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

#define fast                 \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);

int main()
{
    fast;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int count = 0;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            sum += x;
            if (x == -1)
            {
                count += 1;
            }
        }
        if (sum >= 0)
        {
            if (count % 2 == 0)
            {
                cout << 0 << endl;
            }
            else
            {
                cout << 1 << endl;
            }
        }
        else {
            int negOne = abs(sum);
            int a ;
            if(negOne%2 == 0) {
                a = negOne/2;
            } 
            else {
                a = (negOne/2)+1;
            }
            if((count-a)%2==0){
                cout<<a<<endl;
            }
            else {
                cout<<a+1<<endl;
            }
        }
    }
    return 0;
}