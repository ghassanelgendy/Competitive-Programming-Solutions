#include <iostream>
using namespace std;
 
int main() {
    int n, cnt = 1;
    cin >> n;
    string s, prev;
    cin >> prev;
    for (int i = 1; i < n; ++i) {
        cin >> s;
        if (s != prev) {
            cnt++;
            prev = s;
        }
    }
    cout << cnt;
    return 0;
}