#include <iostream>
using namespace std;
int main() {
    int t;
    string a,b;
    cin>>t;
    for (int i = 0; i < t; ++i) {
        cin >> b;
        for (int j = 0; j < b.size(); j+=2) {
            cout<<b[j];
        }cout<<b[b.size()-1]<<endl;
    }
}