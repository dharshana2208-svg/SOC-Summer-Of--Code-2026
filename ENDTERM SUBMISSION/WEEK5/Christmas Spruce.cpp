#include<iostream>
#include<vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<vector<int>> arr(n+1,vector<int>(2,0));
    vector<int> pres(n+1,0);
    for(int i=2;i<=n;i++){
        int r;
        cin>>r;
        arr[i][0]=r;
        arr[r][1]++;
        pres[r]=1;
    }
    for(int i=2;i<=n;i++){
        if(arr[i][1]>0){
            arr[arr[i][0]][1]--;
        }
    }
    bool flag=false;
    for(int i=1;i<=n;i++){
        if(pres[i]==1){
            if((arr[i][1]<3)){
                flag=true;
                break;
            }
        }
    }
    if(flag==true){
        cout<<"No";
    }
    else{
        cout<<"Yes";
    }
}