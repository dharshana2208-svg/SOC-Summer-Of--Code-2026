#include<iostream>
#include<vector>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<vector<int>> index(n,vector<int>(2,0));
        vector<int> arr(n,0);
        for(int i=1;i<=n;i++){
            int r;
            cin>>r;
            arr[r-1]=i;
            if(r==n){
                index[n-1][0]=i;
                index[n-1][1]=i;
            }
        }
        bool flag=true;
        for(int i=n-2;i>-1;i--){
            if(arr[i]>=index[i+1][0]-1&&arr[i]<=index[i+1][1]+1){
                if(arr[i]==index[i+1][0]-1){
                    index[i][0]=arr[i];
                    index[i][1]=index[i+1][1];
                }
                else{
                    index[i][1]=arr[i];
                    index[i][0]=index[i+1][0];
                }
            }
            else{
                flag=false;
                break;
            }
        }
        if(flag==false){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
}