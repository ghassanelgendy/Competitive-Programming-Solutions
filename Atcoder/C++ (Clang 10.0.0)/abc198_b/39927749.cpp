#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <numeric>

using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> p(n), q(n);
    for (int i = 0; i < n; i++) {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++) {
        cin >> q[i];
    }

    vector<int> v(n);
    iota(v.begin(), v.end(), 1);

    int a = 0, b = 0, count = 0;

    do {
        if (v == p) a = count;
        if (v == q) b = count;
        count++;
    } while (next_permutation(v.begin(), v.end()));

    cout << abs(a - b) << endl;

    return 0;
}
