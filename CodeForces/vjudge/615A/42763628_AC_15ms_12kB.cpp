#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int nobuttons, nobulbs;
    cin >> nobuttons >> nobulbs;
    set<int>s;
    for (int i = 0; i < nobuttons; i++)
    {
        short x;cin>>x;
        while(x--)
        {
            int y;cin>>y;
            s.insert(y);
        }
    }

    if (s.size()==nobulbs) cout << "YES" << endl;
    else cout << "NO" <<endl;
}