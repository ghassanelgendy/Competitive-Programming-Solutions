#include <iostream>
using namespace std;

int main() {
    int x[5];
    for (int i = 0; i < 5 ; ++i) {
        cin>>x[i];
        if (x[i] == 0)
        cout<<i+1;
    }

    return 0;
}
