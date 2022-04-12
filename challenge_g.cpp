
#include<iostream>
using namespace std;

//google kikstart code
//problem 
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int j=2;
    int ans=2;
    int pd=a[1]-a[0];
    int current=2;
    for(j=2;j<n;j++){
        if(pd==a[j]-a[j-1]){
            current++;
        }
        else{
            pd=a[j]-a[j-1];
            current=2;
        }
        ans=max(ans,current);
    }
    cout<<ans<<endl;
    return 0;
}