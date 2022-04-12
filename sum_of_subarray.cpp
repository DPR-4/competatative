#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//to be find maxsum in the subarray problem
//brute force approach
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int Maxsum=INT_MIN;
    for(int i=0;i<n;i++){
        
        for(int j=i;j<n;j++){
            int ans=0;
            for(int k=i;k<=j;k++){
                // cout<<a[k]<<" ";
                ans=a[k]+ans;
            }
            Maxsum=max(Maxsum,ans);
        }
    }

    cout<<Maxsum<<endl;
    return 0;
}