#include <bits/stdc++.h>
using namespace std;
int main(){
string x; cin>>x; set<char>word;
    for (char & i : x) {
        word.emplace(i);
    }
    cout<<(!(word.size()%2)? "CHAT WITH HER!":"IGNORE HIM!");
}