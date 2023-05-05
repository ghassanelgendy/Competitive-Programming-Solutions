#include <iostream>
#include <string>
using namespace std;
int main() {
    int n;
    string s;
    cin>>n>>s;

    string a = s.substr(0,n/2);
    string b = s.substr(n/2,n);

    if (a == b)
        cout<<"Yes";
    else
        cout<<"No";

    return 0;
}
