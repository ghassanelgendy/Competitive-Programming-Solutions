#include <iostream>
 
int main() {
    using namespace std;
    int n;
    cin>>n;
    int arr[n][n];
    fill_n(&arr[0][0], sizeof(arr) / sizeof(**arr), 1);
 
    for (int i = 1; i < n; ++i) {
        for (int j = 1; j < n; ++j)
            arr[i][j] = arr[i-1][j]+arr[i][j-1];
    }
    cout<<arr[n-1][n-1];
}