#include<iostream>
#include<vector>
#include<algorithm>
#include<numeric>

using namespace std;

int main(){
    int r;
    cin>>r;
    while(r--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n,greater<int>());
        long long s1=0,s2=0;
        for(int i =0; i<n; i++) {
            if(i % 2 == 0) {
                if(arr[i] % 2 == 0) {
                    s1+=arr[i];
                }
            } else {
                if(arr[i] % 2 != 0) {
                    s2+=arr[i];
                }
            }
        }
        if(s1>s2){
            cout<<"Alice";
        }
        else if(s2>s1){
            cout<<"Bob";
        }
        else{
            cout<<"Tie";
        }
        cout<<endl;
    }
}