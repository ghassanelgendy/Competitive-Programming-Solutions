#include <iostream>
using namespace std;
int main() {
    int arr1[3][3];
    bool arr2[3][3] = { {true, true, true}, {true, true, true}, {true, true, true} };
    for (auto & i : arr1) {
        for (int & j : i) {
            cin >> j;
        }
    }
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 3; ++j) {
            if (arr1[i][j] % 2 == 1) {
                arr2[i][j] = !arr2[i][j];
                if (i > 0) arr2[i-1][j] = !arr2[i-1][j];
                if (i < 2) arr2[i+1][j] = !arr2[i+1][j];
                if (j > 0) arr2[i][j-1] = !arr2[i][j-1];
                if (j < 2) arr2[i][j+1] = !arr2[i][j+1];
            }
        }
    }
    for (auto & i : arr2) {
        for (bool j : i) {
            cout<< j;
        }
        cout << endl;
    }
    return 0;
}