#include <bits/stdc++.h>
using namespace std;
 
int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
 
    int n;
    cin >> n;
 
    unordered_map<string, int> freq;
    for (int i = 0; i < n; i++) {
        string name;
        cin >> name;
 
        if (freq[name] == 0) {
            freq[name] = 1;
            cout << "OK\n";
        } else {
            cout << name << freq[name] << "\n";
            freq[name]++;
        }
    }
 
    return 0;
}