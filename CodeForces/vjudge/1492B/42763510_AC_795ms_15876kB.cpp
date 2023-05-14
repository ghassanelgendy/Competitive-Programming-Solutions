#include <bits/stdc++.h>
using namespace std;

int main() {
     int t;
     cin >> t;
     while(t--){
        int n;
        cin >> n;
        deque<int>q;
        stack<int>s;
        vector<int>v;
        for(int i=0,a;i<n;i++){
            cin >> a;
            v.push_back(a);
        }
        v.push_back(n+1);
        int mx=v[0],e=0;
        for(int i=1;i<=n;i++){
            if(v[i]>mx){
                for(int j=i-1;j>=e;j--) s.push(v[j]);
                e=i;
                mx=v[i];
            }
        }
        while(s.size()){
            cout << s.top() << " ";
            s.pop();
        }
        cout << endl;

     }
     }