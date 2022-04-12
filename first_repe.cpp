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
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    const int N=1e6+2;
    int idx[N];
    for(int i=0;i<N;i++){
        idx[i]=-1;
    }
    int midix=INT_MAX;

    for(int i=0;i<n;i++){
        if(idx[a[i]]!=-1){
            midix=min(midix,idx[a[i]]);
        }
        else{
            idx[a[i]]=i;
        }
    }

    if(midix==INT_MAX){
        cout<<"-1"<<endl;
    }
    else{
        cout<<midix + 1<<endl;

    }

    return 0;
}