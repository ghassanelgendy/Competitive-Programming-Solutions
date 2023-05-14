#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t; cin>>t;
    while(t--)
    {
        int n,m; cin>>n>>m;
        int arr[n];
        unordered_map<int,int> freq; 
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        for(int i=0;i<m;i++)
        {
            int x; cin>>x;
            freq[x]++;
        }
        int counter = 0;
        for(int i=0;i<n;i++)
        {
            if(freq[arr[i]] > 0) 
            {
                counter++;
            }
        }
        cout<<counter<<endl;
    }
}