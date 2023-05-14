#include <iostream>
using namespace std;
int main(){
    int n,cnt=0;
    char k;
    cin>>n>>k;
    while(n--)
    {
        bool is_good=true;
        string s;
        cin>>s;
        for(char i='0';i<=k;i++)
        {
            if(s.find(i)==-1)
            {
                is_good=false;
                break;
            }
        }
        if(is_good)cnt++;
    }
    cout<<cnt;
}