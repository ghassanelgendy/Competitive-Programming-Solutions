#include <iostream>
using namespace std;

int main() {
    //declare inputs
    int N,P;
    //get input
    cin >> N;
    //use rule n(n-1)/2
    P = (N*(N+1))/2;
    //print out p
    cout << P;
    return 0;
}