#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int s,n;
    cin>>s>>n;
    vector<vector<int>> data(n,vector<int>(2,0));
    for(int i=0;i<n;i++){
        cin>>data[i][0]>>data[i][1];
    }
    sort(data.begin(),data.end(), [](const vector<int>& a, const vector<int>& b){
        if (a[0] == b[0]) {
            return a[1] > b[1];
        }
        return a[0] < b[0];
    });

    bool flag=true;
    for(int i=0;i<n;i++){
        if(data[i][0]<s){
            s+=data[i][1];
        }
        else{
            flag=false;
            break;
        }
    }
    if(flag==false){
        cout<<"NO";
    }
    else{
        cout<<"YES";
    }
}