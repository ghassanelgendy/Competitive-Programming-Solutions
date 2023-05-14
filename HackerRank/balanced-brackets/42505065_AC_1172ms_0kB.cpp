#include <iostream>
#include <stack>
using namespace std;

int main() {
    int n;
    cin >> n;
    while (n--) {
        string brackets;
        cin >> brackets;
        stack<char> s;
        bool balanced = true;
        for (char c : brackets) {
            if (c == '(' || c == '[' || c == '{') {
                s.push(c);
            } else {
                if (s.empty()) {
                    balanced = false;
                    break;
                }
                char top = s.top();
                s.pop();
                if ((c == ')' && top != '(') || (c == ']' && top != '[') || (c == '}' && top != '{')) {
                    balanced = false;
                    break;
                }
            }
        }
        if (!s.empty()) balanced = false;
        cout << (balanced ? "YES" : "NO") << endl;
    }
    return 0;
}