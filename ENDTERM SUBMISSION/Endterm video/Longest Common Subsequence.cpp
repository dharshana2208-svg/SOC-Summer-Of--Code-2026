#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    string txt1,txt2;
    cin>>txt1>>txt2;
    int len1=txt1.size(),len2=txt2.size();
    vector<vector<int>> dp(len1 + 1, vector<int>(len2 + 1, 0));
        
    for (int i = 1; i <= len1; ++i) {
        for (int j = 1; j <= len2; ++j) {
            if (txt1[i - 1] == txt2[j - 1]) {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            } else {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }
    cout<<dp[len1][len2];
}