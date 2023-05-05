#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define revsort(arr) sort(arr.begin(),arr.end(),greater<>())
#define sorted(arr) sort(arr.begin(),arr.end())
#define endl '\n'
#define usn int
using namespace std;
//---------------------------------------------------------------//
int main(){
    vector<int>before, after;
    int n,d; cin>>n>>d;
    for (int i = 0; i < n; ++i) {
        usn x; cin>>x;
        if (i >= d)
            after.push_back(x);
        else
            before.push_back(x);
    }
    for (int i : before) {
        after.push_back(i);

    }
    for (auto x : after)
        cout<<x<<' ';

    return 0;
}
