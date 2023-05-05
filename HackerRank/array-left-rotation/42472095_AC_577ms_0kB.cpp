#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define revsort(arr) sort(arr.begin(),arr.end(),greater<>())
#define sorted(arr) sort(arr.begin(),arr.end())
#define endl '\n'
#define ll long long
#define usn int
using namespace std;
//---------------------------------------------------------------//
int main(){
    usn n,d;
    cin>>n>>d;
    deque <int>x;
    for (int i = 0; i < n; ++i) {
        usn c; cin>>c;
        x.push_back(c);
    }
    for (int i = 0; i < d; ++i) {
        usn y = x[0];
        x.pop_front();
        x.push_back(y);
    }
    for ( usn l : x)
        cout<<l<<' ';
    return 0;
}
