#include <iostream>
#include <algorithm>
using namespace std;
int main() {
    string n;
    int k;
    cin>>k;
    while(k--){
        cin>>n;
        sort(n.begin(),n.end());
        bool flag= true;
        for (int i = 0; i < n.size() - 1; ++i) {
            if((int)n[i+1]!=(int)(n[i]+1))
                flag = false;
        }
        (flag)? cout<<"Yes"<<endl:cout<<"No"<<endl;
        }
}