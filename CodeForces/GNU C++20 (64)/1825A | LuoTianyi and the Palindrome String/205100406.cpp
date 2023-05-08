#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define revsort(arr) sort(arr.begin(),arr.end(),greater<>())
#define sorted(arr) sort(arr.begin(),arr.end())
#define endl '\n'
#define ll long long
#define limitation ios::sync_with_stdio(false); cin.tie(nullptr);
#define usn unsigned short
using namespace std;
 
bool isPalindrome(const string& s){
    int n = s.size();
    for (int i = 0; i < n/2; ++i) {
        if (s[i] != s[n-i-1]) {
            return false;
        }
    }
    return true;
}
 
int solve(const string& s) {
    int n = s.size();
    for (int len = n-1; len >= 1; --len) {
        for (int i = 0; i+len < n; ++i) {
            string sub = s.substr(i, len);
            if (!isPalindrome(sub)) {
                return len;
            }
        }
    }
    return -1;
}
 
int main() {
    limitation
    usn t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << solve(s) << endl;
    }
    return 0;
}