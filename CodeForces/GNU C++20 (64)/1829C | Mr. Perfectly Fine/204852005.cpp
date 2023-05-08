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
const int sz=1e6+1;
int main()
{
    ATEF
    short t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        ll mintimea=1000000000000,mintimeb=1000000000000, minTotal=1000000000000;
        bool flag1=false,flag2=false;
        while(n--)
        {
            int time;cin>>time;
            string s;cin>>s;
            if(s=="01")
            {
                if(time<mintimea)
                {
                    mintimea=time;
                    flag1=true;
                }
            }
            else if(s=="10")
            {
                if(time<mintimeb)
                {
                    mintimeb=time;
                    flag2=true;
                }
            }
            else if(s=="11")
            {
                if(time < minTotal)
                {
                    minTotal=time;
                    flag1=true;
                    flag2=true;
                }
            }
        }
        if(!flag1||!flag2) cout<<-1<<endl;
        else
        {
            if(minTotal > 0)
            {
                cout << min(minTotal, mintimea + mintimeb) << endl;
            }
        }
    }
}