#include <iostream>
using namespace std;
int main() {
int n,c,m,cc,mm;
mm=0;
cc=0;
cin>>n;
    for (int i = 0; i < n ; ++i) {
        cin>>m>>c;
        if (m>c)
            mm++;
        else if (c > m)
        cc++;
        else
            continue;
    }
    (mm>cc)? cout<<"Mishka":(cc>mm)? cout<<"Chris":cout<<"Friendship is magic!^^";
    return 0;
}
