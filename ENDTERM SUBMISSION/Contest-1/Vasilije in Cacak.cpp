#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,k;
        long long x;
        cin>>n>>k>>x;
        long long s,l;
        s=(k*(k+1))/2;
        l=(n*(n+1))/2-((n-k)*(n-k+1))/2;
        if(x>=s && x<=l){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}