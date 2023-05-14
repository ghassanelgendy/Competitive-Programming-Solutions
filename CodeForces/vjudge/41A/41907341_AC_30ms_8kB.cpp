#include <bits/stdc++.h>
#define testCase int g; cin>>g; while(g--)
#define rev(g) reverse(g.begin(),g.end())
#define out(g) cout<<g<<endl
#define in(g) cin>>g
#define endl '\n'
//---------------------------------------------------------------//
using namespace std;
//---------------------------------------------------------------//
int main(){
    string s,t;
    cin>>s>>t;
    reverse(s.begin(),s.end());
    t==s? cout<<"YES":cout<<"NO";
    return 0;
}