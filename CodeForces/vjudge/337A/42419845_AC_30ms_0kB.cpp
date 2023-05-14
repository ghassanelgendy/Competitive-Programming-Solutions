#include <bits/stdc++.h>
#define sorted(arr) sort(arr.begin(),arr.end())
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//
int main(){
    usn n,m;
    cin>>n>>m;
    vector<usn>puzz(m);
    for (usn i = 0; i < m; ++i) {
        cin>>puzz[i];
    }
    sorted(puzz);
    int min = INT_MAX;
    for (int i = 0; i <= m - n; ++i) {
        int diff = puzz[i+n-1] - puzz[i];
    if (diff < min)
        min = diff;
    }
    cout<<min;
}