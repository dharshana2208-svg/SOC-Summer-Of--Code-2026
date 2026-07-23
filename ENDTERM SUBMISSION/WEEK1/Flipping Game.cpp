#include<iostream>
#include<string>

using namespace std;

int main(){
    int n,var,zero=0,one=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>var;
        if(var==0) arr[i]=1;
        else arr[i]=-1;
    }
    int max=-1,val=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=arr[j];
            if(sum>max){
                max=sum;
                val=j-i+i;
            }
            else if(sum==max&&val<j-i+1){
                val=j-i+1;
            }
        }
    }
    cout<<max;
}