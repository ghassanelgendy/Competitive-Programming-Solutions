#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define revsort(arr) sort(arr.begin(),arr.end(),greater<>())
#define sorted(arr) sort(arr.begin(),arr.end())
#define endl '\n'
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//
void print(vector<int> v) {
    cout << v.size();
    for (int x: v)
        cout << " " << x;
    cout << endl;
}
int main(){
    vector<int> gr0, sm0, zer0;
    usn n; cin>>n;
    for (int i = 0; i < n; ++i) {
        int k; cin>>k;
        if (k > 0) gr0.push_back(k);
        else if (k < 0) sm0.push_back(k);
        else zer0.push_back(k);
    }
    if (gr0.empty()){
        gr0.push_back(sm0.back());
        sm0.pop_back();
        gr0.push_back(sm0.back());
        sm0.pop_back();
    }
    if (!(sm0.size()%2)){
        zer0.push_back(sm0.back());
        sm0.pop_back();
    }
    print(sm0);
    print(gr0);
    print(zer0);
    return 0;
}
