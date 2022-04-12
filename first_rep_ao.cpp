#include<iostream>
#include<bits/stdc++.h>
using namespace std;
//first repeating element asked in amazon and oracle
//constraints:
//1<=N<=10^6
//0<=Ai<=10^6


int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++ ){
        cin>>a[i];
    }
    int rep=a[0];
    int ans;
    for(int i=0;i<n;i++){
        if(rep==a[i]){
            ans=i;
           
        }
    }
    cout<<ans<<endl;

    return 0;
}