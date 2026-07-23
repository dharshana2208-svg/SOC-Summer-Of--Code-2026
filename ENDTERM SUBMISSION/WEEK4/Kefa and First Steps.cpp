#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int m=1,temp_max=1;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n-1;i++){
        if(arr[i]<=arr[i+1]){
            temp_max++;
        }
        else{
            m=max(temp_max,m);
            temp_max=1;
        }
    }
    m=max(temp_max,m);
    cout<<m;
}