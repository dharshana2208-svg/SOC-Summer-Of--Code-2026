#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    int one_count=0,max_final=-n-1,current_max=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]==1){
            one_count++;
            current_max--;
        }
        else{
            current_max++;
        }
        max_final=max(max_final,current_max);
        if(current_max<0){
            current_max=0;
        }
    }
    cout<<one_count+max_final;
}