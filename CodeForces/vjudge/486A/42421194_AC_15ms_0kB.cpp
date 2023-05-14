#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define revsort(arr) sort(arr.begin(),arr.end(),greater<>())
#define sorted(arr) sort(arr.begin(),arr.end())
#define endl '\n'
#define usn long long
using namespace std;
//---------------------------------------------------------------//
int main(){
    usn n;
    cin>>n;
    (!(n % 2))? cout<<n/2 : cout<<-((n+1)/2);
    return 0;
}
