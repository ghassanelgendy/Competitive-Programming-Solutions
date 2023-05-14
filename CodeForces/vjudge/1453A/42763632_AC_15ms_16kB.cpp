#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        unordered_set<int> s;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
            s.insert(arr[i]);  
        }
        int counter=0;
        for(int i=0;i<m;i++)
        {
            int x;
            cin>>x;
            if(s.count(x)==1) counter++; 
        }
        cout<<counter<<endl;
    }
    return 0;
}