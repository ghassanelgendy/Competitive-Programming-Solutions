#include <bits/stdc++.h>
#define testCase int g; cin>>g; while(g--)
#define rev(g) reverse(g.begin(),g.end())
#define out(g) cout<<g<<endl
#define in(g) int g; cin>>g
#define end '\n'
//---------------------------------------------------------------//
using namespace std;
//---------------------------------------------------------------//
int main(){
in(n);
int arr[n];
    for (int i = 0; i < n; ++i) {
        cin>>arr[i];
    }
    sort(arr,arr+n);
        if (arr[0] == 1) cout << "-1";
        else cout << '1';
  
}