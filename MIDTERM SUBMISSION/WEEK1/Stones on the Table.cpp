#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,c;
    cin>>n;
    char color1,color2;
    c=0;
    cin>>color1;
    for(int i=1;i<n;i++){
        cin>>color2;
        if(color1==color2){
            c++;
        }
        color1=color2;
    }
    cout<<c;
}