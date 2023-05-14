#include <iostream>
using namespace std;

int main() {
    int c, x = 0;
    cin>>c;
    for(int i=1;;i++)
    {
        c-=((i*(i+1))/2);
        x++;
        if(c<0) break;
    }
    cout<<x-1<<endl;
}