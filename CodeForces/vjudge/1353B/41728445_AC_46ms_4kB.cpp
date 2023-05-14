#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        int a[n], b[n];
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++) {
            cin >> b[i];
        }
        sort(a, a + n); // sort a in increasing order
        sort(b, b + n, greater<int>()); // sort b in decreasing order
        for (int i = 0; i < k; i++) {
            if (b[i] > a[i]) {
                swap(a[i], b[i]); // swap elements if b[i] is greater than a[i]
            }
        }
        int sum = 0;
        for (int i = 0; i < n; i++) {
            sum += a[i];
        }
        cout << sum << endl;
    }
    return 0;
}