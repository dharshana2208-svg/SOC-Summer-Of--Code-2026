#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> k;
    int sum=0;
    int j;
    for(j=1;sum+j<=n;j++){
        sum+=j;
        k.push_back(j);
    }
    if(sum<n){
        k[j-2]+=n-sum;
    }
    cout<<k.size()<<endl;
    for(int i=0;i<j-1;i++){
        cout<<k[i]<<endl;
    }
}