#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    unordered_multimap<string,int>unos;
    int n;cin>>n;
    string arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        unos.insert({arr[i],1});

    }
    for(int i=n-1;i>=0;i--)
    {
        if(unos.count(arr[i])==1) cout<<arr[i]<<endl;
        else if(unos.count(arr[i])>1)
        {
            cout<<arr[i]<<endl;
            unos.erase(arr[i]);
        }
        else continue;
    }
}