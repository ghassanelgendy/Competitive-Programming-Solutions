#include <bits/stdc++.h>
#define testCase(g) int g; cin>>g; while(g--)
#define rev(g) reverse(g.begin(),g.end())
#define out(g) cout<<g<<endl
#define in(g) cin>>g
#define end '\n'
//---------------------------------------------------------------//
using namespace std;
//---------------------------------------------------------------//
int n;
int main(){
cin>>n;
int arr[n];
    for (int i = 0; i < n; ++i) cin>>arr[i];
    sort(arr,arr+n);
    for (int i = 0; i < n; ++i) cout<<arr[i]<<' ';
    return 0;
}