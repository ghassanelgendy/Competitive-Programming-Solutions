#include <iostream>
using namespace std;
int main() {
    string x;
    cin >> x;
    for (int i = 0; i < x.size() ; ++i) {
        if (x[i]>= '5' && x[0] != '9' || x[i]>= '5' && i != 0) x[i] = '9' - x[i] + '0';
    }
    cout << x;
}