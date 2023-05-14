#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(0);
    int t;
    cin >> t;
    priority_queue<int> pq;
    unordered_multiset<int> s;
    vector<string> output;
    int counter = 0;
    while (t--)
    {
        string op;
        cin >> op;
        if (op == "insert")
        {
            long long num;
            cin >> num;
            s.insert(num);
            pq.push(-num);
            counter++;
            output.push_back("insert ");
            output.push_back(to_string(num));
            output.push_back("\n");
        }
        else if (op == "removeMin")
        {
            if (pq.empty())
            {
                counter+=2;
                output.push_back("insert 0\n");
                output.push_back("removeMin\n");
            }
            else
            {
                if (s.count(-pq.top()) > 1)
                {
                    s.erase(s.find(-pq.top()));
                    s.insert(-pq.top());
                }
                else
                {
                    s.erase(s.find(-pq.top()));
                }
                pq.pop();
                counter++;
                output.push_back("removeMin\n");
            }
        }
        else if (op == "getMin")
        {
            long long num;
            cin >> num;
            while (!pq.empty() && -pq.top() < num)
            {
                if (s.count(-pq.top()) > 1)
                {
                    s.erase(s.find(-pq.top()));
                    s.insert(-pq.top());
                }
                else
                {
                    s.erase(s.find(-pq.top()));
                }
                pq.pop();
                counter++;
                output.push_back("removeMin\n");
            }
            if (pq.empty() || -pq.top() != num)
            {
                pq.push(-num);
                s.insert(num);
                counter += 1;
                output.push_back("insert ");
                output.push_back(to_string(num));
                output.push_back("\n");
            }
            counter++;
            output.push_back("getMin ");
            output.push_back(to_string(num));
            output.push_back("\n");
        }
    }
    cout << counter << endl;
    for (int i = 0; i < output.size(); i++)
    {
        cout << output[i];
}
}