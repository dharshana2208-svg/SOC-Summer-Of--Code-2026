#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int r;
    cin >> r;
    while(r--){
        int n;
        cin >> n;
        vector<pair<int, int>>  arr(n);
        vector<long long> pref(n);
        vector<int> ans(n);
        for(int i=0; i<n; i++) {
            cin >> arr[i].first;
            arr[i].second=i;
        }
        sort(arr.begin(),arr.end());
        pref[0] = arr[0].first;
        for(int i = 1; i < n; i++){
            pref[i]=pref[i-1]+arr[i].first;
        } 
        ans[arr[n - 1].second] = n - 1;
        for(int i=n-2; i>=0; i--) {
            if (pref[i] >= arr[i + 1].first){
                ans[arr[i].second] = ans[arr[i + 1].second];
            }
            else{
                ans[arr[i].second] = i;
            }
        }
        for (int i = 0; i < n; i++){
            cout << ans[i] << " ";
        }
    }
}