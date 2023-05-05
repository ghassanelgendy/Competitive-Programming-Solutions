#include <bits/stdc++.h>
using namespace std;
int main()
{
        ios_base::sync_with_stdio(0);
        cin.tie(0);
        cout.tie(0);
    int n;
    cin >> n;
    priority_queue<int, vector<int>, greater<int>> potions;
    long long health = 0;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        potions.push(x);
        health += x;
        if (health < 0)
        {
            health -= potions.top();
            potions.pop();
        }
    }
    cout << potions.size();
}