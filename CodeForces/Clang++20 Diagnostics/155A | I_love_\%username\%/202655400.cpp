#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define sort(arr) sort(arr.begin(),arr.end())
#define endd '\n'
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//
int main(){
 usn a,b,min,max,cnt = 0;
 cin>>a;
    for (int i = 0; i < a; ++i) {
        cin>>b;
        if (i == 0) {
            min = b;
            max = b;
        }
        if (b > min) {
            min = b;
            cnt++;
        }
        else if (b < max) {
            max = b;
            cnt++;
        }
        else
            continue;
    }
    cout<<cnt;
    return 0;
}