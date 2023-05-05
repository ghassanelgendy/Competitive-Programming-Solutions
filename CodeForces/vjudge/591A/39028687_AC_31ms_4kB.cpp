#include <iostream>
using namespace std;
int main() {
    double x,ans,a,b,spd;
    cin>>x>>a>>b;
    {
        spd=x/(a+b);
        ans=spd*a;
        cout<<ans;
    }
    return 0;
}
