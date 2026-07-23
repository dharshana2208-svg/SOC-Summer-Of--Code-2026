#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t>0){
        int n,k;
        cin>>n>>k;
        int output;
        output=k+((k-1)/(n-1));
        cout<<output<<endl;
        t--;
    }
}
