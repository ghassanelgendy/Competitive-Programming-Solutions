#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t; cin >> t;
    while(t--)
    {
        int n,k;cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int i=0;
        while(k--)
        {
            if(arr[i]==0)
            {
                while(true)
                {
                    i++;
                    if(arr[i]>0)
                        break;
                }
            }
            if(i>=n) break;
            arr[i]-=1;
            arr[n-1]++;
        }
        for(int i=0;i<n;i++) cout<<arr[i]<<" ";
        cout<<endl;
    }
}