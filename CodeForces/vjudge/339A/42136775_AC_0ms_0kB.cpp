#include <bits/stdc++.h>
//---------------------------------------------------------------//
using namespace std;
//---------------------------------------------------------------//
int main(){
string s;
cin >> s;
    vector<unsigned short> arr;
    for (auto i = 0; i < s.size()+1; i+=2) {
        arr.push_back(s[i]-48);
    }
    sort(arr.begin(),arr.end());
    for (int i = 0; i < arr.size(); i++){
        cout << arr[i];
        if (i != arr.size() - 1)
            cout<<'+';
    }
    return 0;
}