#include <bits/stdc++.h>
#define limitation ios::sync_with_stdio(false); cin.tie(nullptr);
#define usn unsigned int
using namespace std;
int main() {
    limitation
    usn health, n;
    vector<pair<usn, usn>> dragons;
    cin >> health >> n;
    for (int i = 0; i < n; ++i) {
        usn d, r;
        cin >> d >> r;
        dragons.emplace_back(d,r);
    }
    std::sort(dragons.begin(), dragons.end());
    bool flag = true;
    for ( auto x :dragons){
    //cout <<"->"<<x.first<<' '<<x.second<<endl;
        if (x.first < health) {
            health += x.second;
        } else {
            flag = false;
            break;
        }
    }
    cout <<(flag? "YES" : "NO");
    return 0;
}