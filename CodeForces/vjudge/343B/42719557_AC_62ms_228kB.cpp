#include <iostream>
#include <stack>
using namespace std;

int main() {
    string wires;
    cin >> wires;
    
    stack<char> s;
    for (int i = 0; i < wires.length(); i++) {
        if (!s.empty() && s.top() == wires[i]) {
            s.pop();
        } else {
            s.push(wires[i]);
        }
    }
    
    if (s.empty()) {
        cout << "Yes" << endl;
    } else {
        cout << "No" << endl;
    }
    
    return 0;
}
