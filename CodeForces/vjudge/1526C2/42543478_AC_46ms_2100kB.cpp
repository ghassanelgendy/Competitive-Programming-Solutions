#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define revsort(arr) sort(arr.begin(),arr.end(),greater<>())
#define sorted(arr) sort(arr.begin(),arr.end())
#define endl '\n'
#define ll long long
#define limitation ios::sync_with_stdio(false); cin.tie(nullptr);
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//
int main() {
    limitation
    priority_queue<int, vector<int>, greater<int>> q;
    ll health = 0;
    int n;
    cin >> n;
    while (n--) {
        int a;
        cin >> a;
        q.push(a);
        health+=a;
        if (health<0)
        {
            health-=q.top();
            q.pop();
        }
    }
    cout << q.size() << endl;
}