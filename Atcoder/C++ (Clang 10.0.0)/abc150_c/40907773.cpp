#include <algorithm>
#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    while (n)
        if (n%10 == 0)
            n/=10;
        else
            break;
    string srev = to_string(n);
    string s = srev;
    reverse(srev.begin(),srev.end());
    (s == srev) ? cout << "Yes" : cout << "No";
}