#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int arr[n-1];
    int j=0;
    while(j<n-1){
        cin>>arr[j];
        j++;
    }
    int i=0;
    bool flag=false;
    while(i<n-1){
        i+=arr[i];
        if(i==t-1){
            flag=true;
            break;
        }
    }
    if(flag==true){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
}