#include<bits/stdc++.h>
#define ATEF ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ll long long
#define endl "\n"
ll gcd(ll a, ll b) {
    return b == 0 ? a : gcd(b, a % b);
}
ll lcm(ll a, ll b) {
    return a / gcd(a, b) * b;
}
 
using namespace std;
bool check(ll n,ll m)
{
    if(m==n) return true;
    if(m>n||n%3!=0) return false;
    return check(n/3,m) || check(n-n/3,m);
}
void solve()
{
    ll n,m ;cin>>n>>m;
    check(n, m) ? cout << "YES" << endl : cout << "NO" << endl;
}
const int sz=1e6+1;
int main()
{
    ATEF
    short t;cin>>t;
    while(t--)
    {
        solve();
        }
}