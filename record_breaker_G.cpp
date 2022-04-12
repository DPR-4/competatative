#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//Kick start problem
//record breaking day
int main(){
    int n;
    cin>>n;
    int a[n+1];
    a[n]=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //two condition should be satisfied
    //1. previ
    // ous value should be less than curr`ent value
    //2. following value 
    // 1 2 0 7 2 0 2 2
    int ans=0;
    int mx=-1;
    for(int i=0;i<n;i++){
        if(a[i]>mx && a[i]>a[i+1]){
            ans++;
            cout<<a[i]<<endl;
            
        }
        
        
        mx=max(a[i],mx);
    }
    cout<<"two brekout dys: "<<ans<<endl;
    return 0;
}