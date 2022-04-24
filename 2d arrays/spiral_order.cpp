#include<iostream>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    int a[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>a[i][j];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
           if(i==0){
               cout<<a[i][j]<<" ";
           }
           else if((i>1 && i<n-1)&& j==m-1){
               cout<<a[i][j]<<" ";
           }
           else if(i==n-1){
               for(int k=m-1;k!=0;k--){
                   cout<<a[i][k]<<" ";
               }
           }
           else if(j==0){
               for(int d=m-1;d!=1;d--){
                   cout<<a[d][j]<<" ";
               }
           }
           else{
               cout<<" ";
           }
        }
        cout<<endl;
    }
    return 0;
}