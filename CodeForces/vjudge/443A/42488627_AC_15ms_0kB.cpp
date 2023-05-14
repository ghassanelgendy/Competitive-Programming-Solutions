#include <iostream>
#include <set>
using namespace std;
int main() {
set<char>word;
string s;
getline(cin, s);
    for (auto i : s) {
        if (isalpha(i)) word.insert(i);
    }
    cout<<word.size();
return 0;
}
