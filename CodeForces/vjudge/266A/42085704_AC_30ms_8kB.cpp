#include <iostream>
using namespace std;
int main(){
int n,cnt=0;
string s;
cin>>n;
cin>>s;
    for (int i = 0; i < n; ++i) {
        if (s[i] == s[i+1])
            cnt++;
    }
    cout<<cnt;
}