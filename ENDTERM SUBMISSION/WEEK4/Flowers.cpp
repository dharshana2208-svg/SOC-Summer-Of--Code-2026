#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int t,k;
    cin>>t>>k;
    int arr[t][2];
    int max=0;
    for(int i=0;i<t;i++){
        cin>>arr[i][0]>>arr[i][1];
        if(arr[i][1]>max){
            max=arr[i][1];
        }
    }
    vector<long long>dp(max+1,0);
    vector<long long>sum(max+1);
    sum[0]=1;
    dp[0]=1;
    for(int i=1;i<k;i++){
        dp[i]=1;
        sum[i]=(sum[i-1]+dp[i])%1000000007;
    }
    for(int i=k;i<max+1;i++){
        dp[i]=(dp[i-1]+dp[i-k])%1000000007;
        sum[i]=(sum[i-1]+dp[i])%1000000007;
    }
    for(int i=0;i<t;i++){
        cout<<(sum[arr[i][1]]-sum[arr[i][0]-1]+1000000007)%1000000007<<endl;
    }
}