#include <iostream>
#include <algorithm>
#include <set>
using namespace std;
int main() {
    int n,cnt = 0;
    string str;
    cin >> n >> str;
    transform(str.begin(), str.end(), str.begin(), ::toupper);
    set<char> s;
    for (auto i : str)
        s.insert(i);
    auto it = s.begin();
    for (int i = 0; i < 26; ++i) {
        for (int j = 0; j < 26; ++j) {
            if (*it == char('A' + i)) {
                cnt++;
                it++;
            }
        }
    }
    (cnt == 26)? cout<<"YES" : cout<<"NO";
}
