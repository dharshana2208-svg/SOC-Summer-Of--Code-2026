#include<iostream>
#include<string>
#include<vector>

using namespace std;

int main(){
    int r;
    cin>>r;
    while(r--){
        int n,c=0;
        cin>>n;
        string path(n,' ');
        string* ptr= &path;
        for(int i=0;i<n;i++){
            cin>>(*ptr)[i];
        }
        for(int i=0;i<n;i++){
            if((*ptr)[i]=='@'){
                c++;
            }
            if((*ptr)[i]=='*' &&i<n-1&& (*ptr)[i+1]=='*'){
                break;
            }
        }
        cout<<c<<endl;
    }
}