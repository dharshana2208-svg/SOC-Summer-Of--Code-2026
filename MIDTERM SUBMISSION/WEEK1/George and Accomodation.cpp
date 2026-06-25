#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,c;
    cin>>n;
    c=0;
    for(int i=0;i<n;i++){
        int p,q;
        cin>>p>>q;
        if(q-p>=2){
            c++;
        }
    }
    cout<<c;
}