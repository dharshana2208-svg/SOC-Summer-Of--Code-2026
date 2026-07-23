#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n;
        cin>>n;
        vector<pair<int, int>> question(n);
        vector<long long> diff(n+1, 0);
        vector<long long> top(n+1, 0);
        for(int i=0;i<n;i++){
            cin >> question[i].first >> question[i].second;
            top[question[i].first]++;
            diff[question[i].second]++;
        }
        long long count=((long long)n*(n-1)*(n-2))/6;
        long long remove=0;
        for(int i=0;i<n;i++){
            remove+=(top[question[i].first]-1)*(diff[question[i].second]-1);
        }
        cout<<count-remove<<endl;
        t--;
    }
}