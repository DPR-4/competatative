#include<iostream>
#include<bits/stdc++.h>
using namespace std;
// problem :
// given an array of size m. for every i from 0 to n-1;
// output max(a[0],a[1],...,a[i]).

// if preceding value is smaller than the current(mx) value then the it will 
// stay constanat or will increase as per last value in array
int main(){
    int mx=-1888;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        a[i]=k;
    }

    for(int i=0;i<n;i++){
        mx=max(mx,a[i]);
        cout<<mx<<" ";
    }
    return 0;
}