#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    vector<int> arr1(n-k+1);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    arr1[0]=0;
    for(int i=0;i<k;i++){
        arr1[0]+=arr[i];
    }
    for(int i=1;i<n-k+1;i++){
        arr1[i]=arr1[i-1]-arr[i-1]+arr[i+k-1];
    }
    int min=arr1[0],j=0;
    for(int i=0;i<n-k+1;i++){
        if(arr1[i]<min){
            min=arr1[i];
            j=i;
        }
    }
    cout<<j+1;
}