#include <bits/stdc++.h>
#define endl '\n'
#define limitation ios::sync_with_stdio(false); cin.tie(nullptr);
#define usn unsigned short
using namespace std;
//---------------------------------------------------------------//
struct op{
    int type;
    string str;
};
string s;
stack<op>st;
int main(){
    limitation
    int n,k,o;
    string w;
    cin>>n;
    while(n--){
        cin>>o;
        switch (o) {
            case 1:
                cin>>w;
                st.push({1,w});
                s += w;
                break;
            case 2:
                cin>>k;
                st.push({2,s.substr(s.size()-k)});
                s.erase(s.end()-k,s.end());
                break;
            case 3:
                cin>>k;
                cout<<s[k-1]<<endl;
                break;
            case 4:
                op x = st.top();
                st.pop();
                if(x.type == 1)
                    s.erase(s.end()-x.str.size(),s.end());
                else
                    s += x.str;
        }
    }
    return 0;
}