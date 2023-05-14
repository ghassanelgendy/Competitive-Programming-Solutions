#include <iostream>
using namespace std;
int main() {
int x = 0, n;
string op;
cin>>n;
    for (int i = 0; i < n ; ++i) {
        cin>>op;
        if (op[0] == '+' || op[2] == '+')
            x++;
        else
            x--;
    }
cout<<x;
    return 0;
}
