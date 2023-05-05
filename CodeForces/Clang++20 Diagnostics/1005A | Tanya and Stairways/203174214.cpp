#include <bits/stdc++.h>
#define endl '\n'
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//
int main(){
    usn n, cnt = 0;
    cin >> n;
    vector<usn> count, stairs;
    for (int i = 0; i < n; ++i) {
        usn x;
        cin >> x;
        stairs.push_back(x);
    }
    for (int i = 0; i < n; ++i) {
        if (i == 0 || stairs[i] == 1) {
            if (i != 0) {
                count.push_back(cnt);
            }
            cnt = 1;
        } else {
            cnt++;
        }
    }
    count.push_back(cnt);
    cout << count.size() << endl;
    for (auto x : count)
        cout << x << ' ';
    return 0;
}