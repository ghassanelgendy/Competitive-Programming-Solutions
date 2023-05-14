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
        short s;cin>>s;
        vector<double>v;
        int counter=0;
        for(int i=0;i<s;i++)
        {
            double x;cin>>x;
            v.push_back(x);
        }
        for(int i=0;i<v.size()-1;i++)
        {
            if(max(v[i],v[i+1])/min(v[i],v[i+1]) > 2) {
                v.insert(v.begin()+i+1,max(v[i],v[i+1])/2);
                i--;
                counter++;
            }

        }
        cout<<counter<<endl;
    }


}