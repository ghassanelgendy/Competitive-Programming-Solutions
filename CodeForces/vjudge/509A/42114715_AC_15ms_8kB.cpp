#include <string>
#include <iostream>
using namespace std ;
int main(){
int n,i,j;
cin>>n;
 int arr[n][n];
 for(j=0;j<n;++j){
     arr[i][j]=1;}
    for(i=1;i<n;++i) {
        for (j = 1; j < n; ++j){
            arr[i][0]=arr[i-1][0];
            arr[i][j]=arr[i-1][j]+arr[i][j-1];
        }

    }
int max =0;
    for(i=0 ; i<n;++i){
        for(j=0;j<n;++j){
            if(max<arr[i][j])
                max=arr[i][j];}}
    cout<<max;
}