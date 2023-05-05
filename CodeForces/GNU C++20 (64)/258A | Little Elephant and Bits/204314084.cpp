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
    limitation
    string binary;
    cin>>binary;
    set<char>edge;
    for (auto x : binary){
        edge.emplace(x);
    }
    if (edge.size()==1) {
        cout<<binary.substr(0,binary.size()-1);
        return 0;
    }
    rev(binary);
    for (int i = binary.size()-1; i >= 0; --i) {
        cout<<binary[i];
        binary.pop_back();
        if (binary[i-1] == '0') {
            binary.pop_back();
            break;
        }
    }
    rev(binary);
    cout<<binary;
}