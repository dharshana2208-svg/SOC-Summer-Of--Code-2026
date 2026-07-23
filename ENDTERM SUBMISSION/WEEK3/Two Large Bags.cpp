#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int maxi=1;
    int count=1;
    for(int i=0;i<n-1;i++){
        if(arr[i]*2>=arr[i+1]){
            count++;
        }
        else{
            if(maxi<count){
                maxi=count;
            }
            count=1;
        }
        maxi=max(maxi,count);
    }
    cout<<maxi<<endl;
}