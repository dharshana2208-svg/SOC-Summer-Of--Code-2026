#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int sum=arr[0];
    int sum_final=arr[0];
    for(int i=1;i<n;i++){
        sum=max(arr[i],sum+arr[i]);
        sum_final=max(sum_final,sum);
    }
    cout<<sum_final;
}