#include <bits/stdc++.h>
#define limitation ios::sync_with_stdio(false); cin.tie(nullptr);
using namespace std;
//---------------------------------------------------------------//
    int main() {
    limitation
    deque<char> numBinary;
    bool allOnes = true;
    string stringBinary;
    cin >> stringBinary;
    for (auto x: stringBinary) {
        numBinary.push_back(x);
        if (x == '0') allOnes = false;
    }
    deque<char>::iterator it;
    for (it = numBinary.begin(); it != numBinary.end(); ++it) {
        if (*it == '0' || *it == '1' && allOnes) {
            numBinary.erase(it);
            break;
         }
    }
    for(auto x : numBinary) cout<<x;
}
