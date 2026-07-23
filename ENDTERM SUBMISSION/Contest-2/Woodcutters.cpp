#include <iostream>
#include <vector>

using namespace std;

int main(){
    int n;
    cin>>n;
    long long x[n],h[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>h[i];
    }
    int count=1;
    long long previous=x[0];
    for(int i=1;i<n;i++){
        if(i==n-1){
            count++;
            break;
        }
        if(x[i]-h[i]>previous){
            count++;
            previous=x[i];
        }
        else if(x[i]+h[i]<x[i+1]){
            count++;
            previous=x[i]+h[i];
        }
        else{
            previous=x[i];
        }
    }
    cout<<count;
}