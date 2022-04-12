#include<iostream>
using namespace std;

//sum of the given two index position should be equal to s
//this is brute force approach
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int s;
    cin>>s;
    for(int i=0;i<n;i++){
        int ans=0;
        for(int j=i;j<n;j++){
            
            if(ans==s){
                int m,n;
                m=i;
                n=j;
                cout<<m<<" and "<<n<<endl;
                break;
            }
            ans=ans+a[j];
        }
    }
    return 0;
}