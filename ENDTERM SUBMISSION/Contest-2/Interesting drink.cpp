#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,t;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cin>>t;
    int arr1[t];
    for(int i=0;i<t;i++){
        cin>>arr1[i];
        int count=0;
        int lower=0,higher=n-1;
        while(lower<=higher){
            int mid=lower+(higher-lower)/2;
            if(arr[mid]<=arr1[i]){
                lower=mid+1;
                count=mid+1;
            }
            else{
                higher=mid-1;
            }
        }
        cout<<count<<endl;
    }

}