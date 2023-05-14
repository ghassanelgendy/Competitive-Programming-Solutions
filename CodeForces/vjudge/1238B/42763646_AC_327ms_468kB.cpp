#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    int t;cin>>t;
    while(t--)
    {
        deque<int>dq;
        long long n,r,counter=0,c=0;cin>>n>>r;
        for(int i=1;i<=n;i++)
        {
            long long x;cin>>x;
            dq.push_back(x);

        }
        sort(dq.begin(),dq.end());
        dq.erase(unique(dq.begin(),dq.end()),dq.end());
        for(long long i=dq.size()-1;i>=0;i--)
        {
            if(dq[i]-c>0)
            {
                counter++;
                c+=r;
            }
        }


        cout<<counter<<endl;
    }

}