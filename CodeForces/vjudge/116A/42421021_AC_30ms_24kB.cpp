#include <bits/stdc++.h>
#define rev(g) reverse(g.begin(),g.end())
#define revsort(arr) sort(arr.begin(),arr.end(),greater<>())
#define sorted(arr) sort(arr.begin(),arr.end())
#define endl '\n'
#define usn unsigned int
using namespace std;
//---------------------------------------------------------------//
int main(){
usn n,exist,enter,totalExist,fin = 0;
cin>>n;
set<usn>min;
while (n--){
    usn x;
cin>>exist>>enter;
totalExist = fin-exist+enter;
fin = fin - exist + enter;
min.emplace(totalExist);
}
cout<<*prev(min.end());
    return 0;
}