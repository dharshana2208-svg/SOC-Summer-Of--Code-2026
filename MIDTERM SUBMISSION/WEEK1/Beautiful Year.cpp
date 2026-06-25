#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,i;
    cin>>n;
    i=n;
    while(true){
        i+=1;
        string num=to_string(i);
        bool flag=true;
        for(int k=0;k<4;k++){
            for(int m=k+1;m<4;m++){
                if(num[k]==num[m]){
                    flag=false;
                    break;
                }
            }
        }
        if(flag==true){
            break;
        }
    }
    cout<<i;
}