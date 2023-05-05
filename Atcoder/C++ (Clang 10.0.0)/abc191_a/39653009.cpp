#include <iostream>
using namespace std;
int main() {
int v,t,s,d;
cin>>v>>t>>s>>d;
if ((t <= float(d)/v) && (float(d)/v <= s))
    cout<<"No";
else
    cout<<"Yes";
return 0;
}
