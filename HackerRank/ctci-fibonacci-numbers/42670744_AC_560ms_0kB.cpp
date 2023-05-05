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

int fib(int n) {
    if ( n ==0 || n == 1)
        return n;
    else
    return fib(n-2)+ fib(n-1);
}

int main(){
    int x;
    cin>>x;
    cout<<fib(x);
}