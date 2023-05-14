#include <bits/stdc++.h>
#define usn unsigned short
using namespace std;

int main() {
    usn n, m;
    cin >> n >> m;

    queue<pair<int, int>> q; // pair<index, candies_remaining>

    for (usn i = 0; i < n; i++) {
        int a;
        cin >> a;
        q.emplace(i, a);
    }

    int last_child;
    while (!q.empty()) {
        auto [index, candies_remaining] = q.front();
        q.pop();

        if (candies_remaining > m) {
            q.emplace(index, candies_remaining - m);
        } else {
            last_child = index;
        }
    }

    cout << last_child + 1 << endl;

}
