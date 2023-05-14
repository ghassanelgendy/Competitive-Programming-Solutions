#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define sort(arr) sort(arr.begin(),arr.end())
#define endd '\n'
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//

int main() {
    usn n;
    usn min = 101;
    usn max = 0;
    usn minPose = 0;
    usn maxPose = 0;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        usn x;
        cin >> x;
        if (x > max) {
            max = x;
            maxPose = i;
        }
        if (x <= min) {
            min = x;
            minPose = i;
        }
    }
    if (minPose > maxPose)
        cout<<(maxPose-1) +(n - minPose);
    else
        cout<<(maxPose-1) +(n - ++minPose);
}