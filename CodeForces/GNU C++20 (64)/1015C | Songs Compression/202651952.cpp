#include <bits/stdc++.h>
using namespace std;
//---------------------------------------------------------------//
int main(){
long long n,m,cnt = 0,sumA = 0,sumB = 0;
cin>>n>>m;
vector<long long>a(n),b(n),diff(n);
    for (int i = 0; i < n; ++i) {
        cin>>a[i]>>b[i];
        sumA+=a[i];
        sumB+=b[i];
        diff[i]+=a[i]-b[i];
    }
    if (sumB>m) {
        cout << -1;
        return 0;
    }
    sort(diff.begin(),diff.end(),greater<>());
    for (int i = 0; i < n; ++i) {
        if (sumA > m){
            sumA -= diff[i];
        cnt++;
    }
        else
            break;
    }
    cout<<cnt;
}