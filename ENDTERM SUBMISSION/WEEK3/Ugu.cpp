#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

int main(){
    int r;
    cin>>r;
    while(r--){
        int n;
        cin>>n;
        string arr;
        int c=0;
        int first_index=-1;
        cin>>arr;
        for(int i=0;i<n;i++){
            if(arr[i]=='1'){
                first_index=i;
                break;
            }
        }
        if(first_index==-1){
            cout<<0<<endl;
        }
        else{
            for(int i=first_index+1;i<n;i++){
                if(arr[i]!=arr[i-1]){
                    c++;
                }
            }
            cout<<c<<endl;
        }
    }
}