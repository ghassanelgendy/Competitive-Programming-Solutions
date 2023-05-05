#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    (n % 4 == 1)?  cout<<'8' :(n % 4 == 2)? cout<<'4':
    (n % 4 == 3)?  cout<<'2':(n % 4 == 0 && n !=0)? cout<<'6':cout<<'1';
    return 0;
}
