#include <iostream>
using namespace std;
int main() {
    int a,b,sa,sb;
    cin>>a>>b;
    sa=(a%10)+((a%100)/10%10)+((a%1000)/100%10);
    sb=(b%10)+((b%100)/10%10)+((b%1000)/100%10);
if (sa>sb)
    cout<<sa;
else
    cout<<sb;
    return 0;
}
