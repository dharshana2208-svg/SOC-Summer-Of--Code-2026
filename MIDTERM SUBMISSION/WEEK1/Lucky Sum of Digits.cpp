#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,p,i,d;
    cin>>n;
    p=n/4;
    bool check=false;
    for(i=0;i<=p;i++){
        if((n-(i*4))%7==0){
            check=true;
            break;
        }
    }
    if(check==false&&n%4!=0){
        cout<<"-1";
    }
    else{
        d=(n-((i)*4))/7;
        cout<< string(i,'4')<<string(d,'7');
    }
}
