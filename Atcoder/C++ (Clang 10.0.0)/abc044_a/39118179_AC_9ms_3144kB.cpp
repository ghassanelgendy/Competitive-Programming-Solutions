#include <iostream>
using namespace std;
int main() {
    int n,k,x,y;
    cin>>n>>k>>x>>y;
    if (n<=k)
        cout<<n*x;
    else if (n>k)
cout<<((n-k)*y) + k*x;
    return 0;
}
