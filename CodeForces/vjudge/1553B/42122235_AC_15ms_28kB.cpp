#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
bool c(string s , string t){
    for (int i = 1; i <=s.size() ; ++i) {
        string sr = s.substr(0,i);
        string sl = s.substr(0,i-1);
        reverse(sr.begin(),sr.end());
        string s =sl +sr;
        if (s.find(t)!=string ::npos)
            return true;
    }
    return false;
}

int main() {
    int x ;
    cin>>x;
    for (int i = 0; i <x ; ++i) {
        string a,b;
        cin>>a>>b;
        if(c(a,b))
            cout<<"Yes"<<'\n';
        else
            cout<<"No"<<'\n';

    }


    return 0;

}
/*int n; cin>>n;
vector<int> a(n);
for (auto &i :a) {
cin>>i;
}*/