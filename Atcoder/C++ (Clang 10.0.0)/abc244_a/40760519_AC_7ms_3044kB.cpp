/*Given a string S of length NN consisting of lowercase English alphabets, print the last character of S.*/
#include <iostream>
using namespace std;

int main(){
    int n;
    string s;
    cin>>n;
    cin>>s;
    cout<<s[n-1];
    return 0;
}