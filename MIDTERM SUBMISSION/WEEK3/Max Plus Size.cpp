#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int r;
    cin>>r;
    while(r--){
        int n;
        cin>>n;
        int arr[n];
        int max=0;
        for(int i=0;i<n;i++){
            cin>>arr[i];
            if(max<arr[i]){
                max=arr[i];
            }
        }
        if(n%2==0){
            cout<<max+n/2<<endl;
        }
        else{
            bool odd=false,even=false;
            for(int i=0;i<n;i++){
                if(max==arr[i]&&i%2==0){
                    even=true;
                    cout<<max+n/2+1<<endl;
                    break;
                }
                if(max==arr[i]&&i%2!=0){
                    odd=true;
                }
            }
            if(even==false&&odd==true){
                cout<<max+n/2<<endl;
            }
        }
    }
}