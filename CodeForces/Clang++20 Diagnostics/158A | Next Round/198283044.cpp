#include <iostream>
using namespace std;
int main() {
int n,k, cnt=0;
cin>>n>>k;
int arr[n];
{
    for (int i = 0; i < n; ++i) {
        cin>> arr[i];
    }
    for (int j = 0; j < n && arr[j] != 0; ++j) {
        if (arr[j] >= arr[k-1])
            cnt++;
    }
    cout << cnt;
}
    return 0;
}