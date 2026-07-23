#include<iostream>
#include<string>
#include<cmath>

using namespace std;

int main(){
    int r;
    cin>>r;
    while(r--){
        int n;
        cin>>n;
        int arr[n];
        int min=1,max=n;
        int mini,maxi;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(arr[i]==min){
                mini=i+1;
            }
            if(arr[i]==max){
                maxi=i+1;
            }
        }
        int a,b;
        if(mini<maxi){
            a=mini;
            b=maxi;
        }
        else{
            a=maxi;
            b=mini;
        }
        if(n-b+1>=a){
            if(b-a+a>=n-b+1+a){
                cout<<a+n-b+1;
            }
            else{
                cout<<b;
            }
        }
        else{
            if(b-a+n-b+1>=n-b+1+a){
                cout<<a+n-b+1;
            }
            else{
                cout<<n-a+1;
            }
        }
        cout<<endl;
    }
}