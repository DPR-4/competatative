#include<iostream>
using namespace std;
// subarray problem 

int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a[i]=k;
    }
    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=i;j<n;j++){
            ans=ans+a[j];
            cout<<ans<<" ";
        }
        cout<<endl;
    }
    return 0;
}