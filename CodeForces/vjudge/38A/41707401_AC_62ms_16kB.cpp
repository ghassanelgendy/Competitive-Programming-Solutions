#include <iostream>
using namespace std;

int main() {
    int n, a, b, years = 0;
    cin >> n;
    int d[n];
    for (int i = 1; i < n; ++i) {
        cin >> d[i];
    }
    cin >> a >> b;
    for (int i = a; i < b; ++i) {
        years += d[i];
    }
    cout << years;
    return 0;
}
