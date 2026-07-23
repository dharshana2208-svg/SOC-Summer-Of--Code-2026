#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n,t;
    cin>>n>>t;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int left=0;
    int right=0;
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        sum+=arr[right];
        while(sum>t){
            sum-=arr[left];
            left++;
        }
        count=max(count,right-left+1);
        right++;
    }
    cout<<count;
}