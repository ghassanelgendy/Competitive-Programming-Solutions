#include <bits/stdc++.h>
using namespace std;


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int n,possum=0,negsum=0;cin>>n;
    for(int i=0;i<n;i++)
    {
        int x;cin>>x;
        if(x>=0)
        {
            possum+=x;
        }
        if(x<0)
        {
            negsum+=x;
        }
    }
    cout<<possum-negsum<<endl;
}