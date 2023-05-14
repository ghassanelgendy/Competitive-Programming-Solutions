#include <iostream>
using namespace std;
int main() {
string arr[] = {"one", "two", "three" , "four", "five", "six", "seven", "eight", "nine", "Greater than 9"};
int n;
cin>>n;
if (n<=9)
    cout<<arr[n-1];
else
    cout<<arr[9];
return 0;
}
