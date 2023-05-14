#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define revsort(arr) sort(arr.begin(),arr.end(),greater<>())
#define sorted(arr) sort(arr.begin(),arr.end())
#define endl '\n'
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//
int main(){
    usn t ,n ,d;
    cin>>t;
    while (t--){
        cin>>n>>d;
        usn arr[n];
        for (int i = 0; i < n; ++i) {
            cin>>arr[i];
        }
        sort(arr,arr+n);
        (arr[0] + arr[1] <= d || arr[n-1] <= d)? cout<<"YES"<<endl : cout<<"NO"<<endl;
    }
    return 0;
}
