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
    int key;
    cout<<"enter the key"<<endl;
    cin>>key;
    int flag=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(a[i][j]==key){
                cout<<i<<" "<<j<<endl;
                flag=1;
                break;
            }
        }
        
    }
    if(flag==1){
        cout<<"element found "<<endl;
    }
    else{
        cout<<"not found"<<endl;
    }
    return 0;
}