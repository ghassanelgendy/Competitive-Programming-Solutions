#include <bits/stdc++.h>
#define endl '\n'
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//
int main(){
vector<usn>progs,maths,pes;
usn n,prog = 0,math=0,pe=0,mn ; cin>>n;
    for (int i = 1; i <= n; ++i) {
        usn x; cin>>x;
        if (x == 1) {
            prog++;
            progs.push_back(i);
        }
        else if (x == 2) {
            math++;
            maths.push_back(i);
        }
        else {
            pe++;
            pes.push_back(i);
        }
    }
    mn = min(min(pe,math),prog);
    cout<<mn<<endl;
    for (int i = 0; i < mn; ++i) {
        cout<<progs[i]<<' '<<maths[i]<<' '<<pes[i]<<endl;
    }
}
