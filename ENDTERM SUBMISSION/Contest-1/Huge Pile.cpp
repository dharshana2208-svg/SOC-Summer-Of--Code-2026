#include<iostream>
#include<vector>
#include<cmath>

using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        bool flag=false;
        if(n==k){
            cout<<0<<endl;
        }
        else{
            int current_max = n;
            int current_min = n;
            int level = 0;
            while (current_max > 1|| current_min>=1) {
                level++;
                current_max = (current_max + 1) / 2; 
                current_min = current_min / 2;
                if (k >= current_min && k <= current_max) {
                    cout<<level<<endl;
                    flag = true;
                    break;
                }
            }
            if(flag==false){
                cout<<-1<<endl;
            }
        }
    }
}