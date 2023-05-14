#include <bits/stdc++.h>
using namespace std;

int main()
{
    set<int>sett;
    int n;cin>>n;
    string s;cin>>s;
    bool flag=false;
    int arr[n];
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='R' && s[i+1]=='L') flag=true;
        cin>>arr[i];
    }
    if(!flag)
    {
        cout<<-1<<endl;
        return 0;
    }
    int counter=0,i=0;
    while(n--)
    {
        if(s[i]=='R'&&s[i+1]=='L')
        {
            while(true)
            {
                arr[i]++;
                arr[i+1]--;
                counter++;
                if(arr[i]==arr[i+1])
                {
                    sett.insert(counter);
                    counter=0;
                    break;
                }
            }
        }
        i++;
    }
    cout<<*sett.begin();
}