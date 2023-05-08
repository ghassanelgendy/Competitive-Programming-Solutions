#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define revsort(arr) sort(arr.begin(),arr.end(),greater<>())
#define sorted(arr) sort(arr.begin(),arr.end())
#define endl '\n'
#define ll long long
#define limitation ios::sync_with_stdio(false); cin.tie(nullptr);
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//
int main(){
    string s = "codeforces";
    int n; cin>>n;
    for (int j = 0; j < n; ++j){
        usn cnt = 0;
        string r; cin>>r;
        for (int i = 0; i < 10; ++i) {
        if (s[i] != r[i]) cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}