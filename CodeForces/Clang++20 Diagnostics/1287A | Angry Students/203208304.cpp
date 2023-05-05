#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        string s;
        cin >> n >> s;
        int res = 0;
        bool changed = true;
        while (changed) {
            changed = false;
            for (int i = n - 2; i >= 0; --i) {
                if (s[i] == 'A' && s[i + 1] == 'P') {
                    s[i + 1] = 'A';
                    changed = true;
                }
            }
            if (changed) ++res;
        }
        cout << res << endl;
    }
    return 0;
}