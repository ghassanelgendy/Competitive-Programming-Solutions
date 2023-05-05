#include <iostream>
using namespace std;
int main() {
    int t,n,cnt = 0 ,mx;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        cin>>n;
        int arr[n];
        for (int j = 0; j < n ; ++j) {
            cin>>arr[j];
        }
        mx = arr[n-1];
        for (int k = n-1; k >= 0; --k) {
            if (arr[k] > mx)
                cnt++;
            else
                mx = arr[k];
            }
        cout<<cnt<<endl;
        cnt=0;
    }
    return 0;
}