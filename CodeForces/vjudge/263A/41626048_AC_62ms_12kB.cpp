#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int arr[5][5];
    for (int i = 0; i < 5; ++i) {
        for (int k = 0; k < 5; ++k) {
            cin >> arr[i][k];
            if (arr[i][k] == 1) {
                cout << abs(3 - (i + 1)) + abs(3 - (k + 1));
                return 0;
            }
        }
    }
}