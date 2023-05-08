#include <iostream>
using namespace std;
 
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int array[n];
        for (int i = 0; i < n; ++i) {
            cin >> array[i];
        }
        int cnt = 0;
        int output = 0;
        for (int i = 0; i < n; ++i) {
            if (array[i] == 0) {
                cnt++;
            } else {
                if (cnt > output) {
                    output = cnt;
                }
                cnt = 0;
            }
        }
        if (cnt > output) {
            output = cnt;
        }
        cout << output << endl;
    }
}