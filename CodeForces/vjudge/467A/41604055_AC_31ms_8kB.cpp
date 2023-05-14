#include <iostream>
using namespace std;
int main() {
    int n,q,p,cnt = 0;
    cin>>n;
    for (int i = 0 ; i < n ; ++i) {
        cin>>q>>p;
        if (p - q >= 2)
            cnt++;
    }
    cout<<cnt;
    return 0;
}
