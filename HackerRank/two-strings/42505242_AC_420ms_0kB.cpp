#include <iostream>
#include <unordered_set>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string s1, s2;
        cin >> s1 >> s2;
        unordered_set<char> chars;
        for (char c : s1) {
            chars.insert(c);
        }
        bool found = false;
        for (char c : s2) {
            if (chars.count(c)) {
                found = true;
                break;
            }
        }
        cout << (found ? "YES" : "NO") << endl;
    }
    return 0;
}