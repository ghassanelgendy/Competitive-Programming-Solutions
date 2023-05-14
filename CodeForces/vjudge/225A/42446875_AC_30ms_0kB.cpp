#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define revsort(arr) sort(arr.begin(),arr.end(),greater<>())
#define sorted(arr) sort(arr.begin(),arr.end())
#define endl '\n'
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//
int main(){
    bool p(true);
usn x,n,a,b;
cin>>n>>x;
while(n--){
    cin>>a>>b;
    if (a == x || a == 7 - x || b == x || b == 7 - x){
        p = false; break;
    }
    x = 7-x;
}
cout<< (p? "YES" : "NO");
    return 0;
}
