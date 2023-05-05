#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define revsort(arr) sort(arr.begin(),arr.end(),greater<>())
#define sorted(arr) sort(arr.begin(),arr.end())
#define endl '\n'
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//
int main(){
    set<unsigned int>horseShoe;
    for (usn i = 0; i < 4; ++i) {
        unsigned int x; cin>>x;
        horseShoe.emplace(x);
    }
    cout<<4-horseShoe.size();
    return 0;
}