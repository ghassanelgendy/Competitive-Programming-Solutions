#include <bits/stdc++.h>
using namespace std;
//---------------------------------------------------------------//
int main(){
    vector<int>before, after;
    int n,d; cin>>n>>d;
    for (int i = 0; i < n; ++i) {
        int x; cin>>x;
        (i >= d) ? after.push_back(x) : before.push_back(x);
    }
    
    for (int i : before) {
        after.push_back(i);
    }
    for (int x : after)
        cout<<x<<' ';
}
