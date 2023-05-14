#include <iostream>
using namespace std;
int main() {
    long long n, k, middle;
    cin >> n >> k;
    middle = (n+1)/2;
    if (k > middle)
        cout << 2 * (k - middle);
    else
         cout << (2 * k) - 1;

}