#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    set<long long>s;
    priority_queue<pair<long long,long long>>pq;
    long long t,z=1;cin>>t;
    while(t--)
    {
        short condition;cin>>condition;
        if(condition==1)
        {
            s.insert(z);
            long long y;cin>>y;
            pq.push({y, -z});
            z++;
        }
        else if(condition==2)
        {
            cout<<*s.begin()<<" ";
            s.erase(s.begin());
        }
        else if(condition==3)
        {
            while(true)
            {
                if(s.count(-pq.top().second))
                {
                    cout<<-pq.top().second<<" ";
                    s.erase(-pq.top().second);
                    pq.pop();
                    break;
                }
                else
                {
                    pq.pop();
                }
            }
        }
    }

}