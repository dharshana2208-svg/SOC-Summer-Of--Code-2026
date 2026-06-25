#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int k;
        cin>>k;
        int arr[2*k];
        for(int j=0;j<2*k;j++){
            int num;
            cin>>num;
            arr[j]=num;
        }
        sort(arr,arr+2*k);
        int s=0;
        for(int j=1;j<k;j+=1){
            s+=arr[j]-arr[j-1]+arr[2*k-j]-arr[2*k-j-1];
        }
        cout<<s<<"\n";
        for(int j=0;j<k;j+=1){
            cout<<arr[j]<<" "<<arr[2*k-j-1]<<"\n";
        }
    }
}