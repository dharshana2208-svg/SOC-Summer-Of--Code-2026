#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<long long>> arr(n,vector<long long>(2));
    for(int i=0;i<n;i++){
        cin>>arr[i][0];
    }
    for(int i=0;i<n;i++){
        cin>>arr[i][1];
    }
    if(n==1){
        cout<<max(arr[0][0],arr[0][1]);
    }
    else{
        vector<vector<long long>>dp(n,vector<long long>(2,-1));
        dp[0][1]=arr[0][1];
        dp[0][0]=arr[0][0];
        for(int i=1;i<n;i++){
            dp[i][0]=max(dp[i-1][0],dp[i-1][1]+arr[i][0]);
            dp[i][1]=max(dp[i-1][1],dp[i-1][0]+arr[i][1]);
        }
        cout<<max(dp[n-1][0],dp[n-1][1]);
    }
}

