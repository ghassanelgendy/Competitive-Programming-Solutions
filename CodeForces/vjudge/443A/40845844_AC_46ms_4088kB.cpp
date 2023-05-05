#include <iostream>
#include "string"
#include "algorithm"
using namespace std;

int main() {
    string s, r, d;
    int cnt, bnt = 0;
    getline(cin, s);
    if (s == "{}") {
        cout << '0';
        return 0;
    }
    for (int i = 1; i < s.size(); i += 3) {
        r += s[i];
    }
    for (int j = 0; j < r.size(); ++j) {
        for (int i = 0; i < r.size(); ++i) {
            if (d.find(r[i]) == std::string::npos)
                d += r[i];

        }
    }
    cout << d.size();
    return 0;
}
