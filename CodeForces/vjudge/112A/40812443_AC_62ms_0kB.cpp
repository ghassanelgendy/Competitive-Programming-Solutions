#include <iostream>

using namespace std;
int main() {
  string x,y;
  cin>>x>>y;

    for (int i = 0; i < x.size() ; ++i) {
        x[i] = tolower(x[i]);
    }

    for (int i = 0; i < y.size() ; ++i) {
        y[i] = tolower(y[i]);
    }
    (x == y)? cout<<'0':(x < y)? cout<<"-1":cout<<'1';
    return 0;
}
