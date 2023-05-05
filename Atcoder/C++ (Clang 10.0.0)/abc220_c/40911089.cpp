#include <iostream>
#include <string>
#include <algorithm>
#include <deque>
#include <queue>
using namespace std;
int main()
{
    queue<long long>elements;
    priority_queue<long long, vector<long long>, greater<long long>> temp;
    int times;cin>>times;
    while (times--)
    {
        int op;cin>>op;
        if(op==1)
        {
            long long x; cin>>x;
            elements.push(x);
        }
        else if(op == 2)
        {
            if(temp.empty())
            {
                temp.push(elements.front());
                elements.pop();
            }
            cout<<temp.top()<<"\n";
            temp.pop();
        }
        else
        {
            while(!elements.empty())
            {
                temp.push(elements.front());
                elements.pop();
            }
            }
        }
}