    #include <iostream>
    using namespace std;
    int main(){
    int l,s;
    cin>>l;
    s=l/5;
    if (l%5 != 0)
        s++;
    cout<<s;
    return 0;
    }