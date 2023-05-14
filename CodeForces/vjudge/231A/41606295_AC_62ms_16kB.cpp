#include <iostream>
using namespace std;
int main() {
    int n,x,y,z, cnt = 0;
    cin>>n;
    for (int i = 0; i < n; ++i) {
       cin>>x>>y>>z;
       if ((x) && (y) || (x)&&(z) || (y) &&(z))
           cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}