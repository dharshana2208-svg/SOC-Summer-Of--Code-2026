#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        cin>>arr[0];
        int sum=arr[0];
        for(int i=1;i<n;i++){
            cin>>arr[i];
            if(arr[i]>arr[i-1]){
                arr[i]=arr[i-1];
            }
            sum+=arr[i];
        }
        cout<<sum<<endl;
    }
}