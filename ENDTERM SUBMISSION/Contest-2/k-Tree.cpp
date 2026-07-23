#include<iostream>
#include<algorithm>
#include<vector>
 
using namespace std;
 
long long count(int total,int max_val){
    vector<long long>dp(total+1,0);
    dp[0]=1;
    for(int i=1;i<total+1;i++){
        for(int j=1;j<min(i,max_val)+1;j++){
            dp[i]=(dp[i]+dp[i-j])%1000000007;
        }
    }
    return dp[total];
}
 
int main(){
    int n,k,d;
    cin>>n>>k>>d;
    cout<<(count(n,k)-count(n,d-1)+1000000007)%1000000007;
}