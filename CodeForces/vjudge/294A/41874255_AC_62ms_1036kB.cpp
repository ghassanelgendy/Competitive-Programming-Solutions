#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
#include <set>
using namespace std;

int main() {
    int n, m;
    cin >> n;
    vector<int> a(n);
    for(int i = 0; i < n; i++) {
        cin >> a[i];
    }
    cin >> m;
    while(m--) {
        int x, y;
        cin >> x >> y;
        x--;
        if(x != 0) {
            a[x-1] += y-1;
        }
        if(x != n-1) {
            a[x+1] += a[x]-y;
        }
        a[x] = 0;
    }
    for(int i = 0; i < n; i++) {
        cout << a[i] << endl;
    }
    return 0;
}
