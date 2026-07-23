#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    string first_line(m,'#'),second_line(m,'.'),third_line(m,'.');
    if(n>2){
        second_line[m-1]='#';
        if(n>3){
            third_line[0]='#';
        }
    }
    for(int i=0;i<n;i++){
        if(i%2==0){
            cout<<first_line<<endl;
        }
        if(i%4==1){
            cout<<second_line<<endl;
        }
        if(i%4==3){
            cout<<third_line<<endl;
        }
    }
}