#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    short t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        deque<int>dqinput(n);
        deque<int>dqc(n);
        deque<int>output(n);
        for(int i=1;i<=n;i++)
        {
            cin>>dqinput[i-1];
            dqc[i-1]=i;
        }
        int counter=0;
        for(int i=n-1;i>=0;i--)
        {
            while(dqinput[dqinput.size()-1]!=dqc[i])
            {
                int x=dqinput[0];
                dqinput.push_back(x);
                dqinput.pop_front();
                counter++;
            }
            dqinput.pop_back();
            output.push_front(counter);
            counter=0;
        }
        for(int i=0;i<n;i++) cout<<output[i]<<' ';
        cout<<'\n';
        }

}