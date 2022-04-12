#include<iostream>
using namespace std;

int main(){
    cout<<"Kedan's Algo for max sum in array"<<endl;
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int currentsum=0;
    int maxsum=INT8_MIN;

    for(int i=0;i<n;i++){
        currentsum=+a[i];
        if(currentsum<0){
            currentsum=0;
        }
        maxsum=max(currentsum,maxsum);
    }

    cout<<maxsum<<endl;
    return 0;
}