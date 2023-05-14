#include <iostream>
using namespace std;
int main() {
    int n, x = 0 , a[] = {100, 20, 10, 5, 1};
    cin>>n;
    for (int i = 0; i < 5 ; ++i) {
        x+= n/a[i];
        n %= a[i];
    }
cout<<x;
    return 0;
}
