#include <iostream>
#include <cmath>
using namespace std;
int main() {
int n,gr1 = 0,gr2 = 0,gr3 = 0,gr4 = 0;
cin>>n;
    for (int i = 0; i < n; ++i) {
        int x;
        cin >> x;
        (x == 1) ? gr1++ : (x == 2) ? gr2++ : (x == 3) ? gr3++ : gr4++;
    }
    cout<<gr4 + gr3 + (gr2 / 2) + ceil((max(0, gr1 - gr3) + (gr2 % 2) * 2) / 4.0);
    return 0;
}