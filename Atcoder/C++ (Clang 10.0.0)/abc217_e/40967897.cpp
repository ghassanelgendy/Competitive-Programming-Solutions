#include <iostream>
#define rev(g) reverse(g.begin(),g.end())
#define revsort(arr) sort(arr.begin(),arr.end(),greater<>())
#define sorted(arr) sort(arr.begin(),arr.end())
#define endl '\n'
#define ll long long
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//
int main(){
 int n;
 cin>>n;
 int A[n];
 ll sum = 0;
    for (int i = 0; i < n; ++i) {
        cin>>A[i]; sum+=A[i];
    }
    ll x; cin>>x; ll ans;
    x+=1;
    ans = x/sum*n;
    x%=sum;
    int id=0;
    while(x>0){
        x -= A[id++];
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}