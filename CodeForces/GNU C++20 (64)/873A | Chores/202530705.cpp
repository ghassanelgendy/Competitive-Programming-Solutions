#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define sort(arr) sort(arr.begin(),arr.end())
#define endd '\n'
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//
int main(){
    unsigned short n,a,x;
    cin>>n>>a>>x;
    int s = 0;
    for (unsigned short i = 0; i < n; ++i) {
        usn chores[n];
        cin>>chores[i];
        if (i >= n-a)
            s+=x;
        else
            s+=chores[i];
    }
    cout<<s;
    return 0;
}