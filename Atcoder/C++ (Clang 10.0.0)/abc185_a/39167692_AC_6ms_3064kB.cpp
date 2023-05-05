#include <iostream>
using namespace std;
int main() {
    int a,b,c,d,mn;
   cin>>a>>b>>c>>d;
    mn = a;
    if (b<mn){
       mn=b;
   }
   if (c<mn){
       mn=c;
   }
   if (d<mn){
       mn=d;
   }
   cout<<mn;




    return 0;
}
