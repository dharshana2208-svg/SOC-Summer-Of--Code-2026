#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long count[100005];
    long long dp[100005];
    int max_element = 0;
    for (int i = 0; i < n; i++) {
        int val;
        cin >> val;
        count[val]++;
        max_element = max(max_element, val);
    }
    dp[0] = 0; 
    dp[1] = count[1]* 1;
    for (int i = 2; i <= max_element; i++) {
        dp[i] = max(dp[i - 1], dp[i - 2] + count[i] * i);
    }
    cout << dp[max_element];
}