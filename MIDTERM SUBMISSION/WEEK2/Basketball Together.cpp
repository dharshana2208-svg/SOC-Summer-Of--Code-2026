#include<iostream>
#include<algorithm>

using namespace std;

int main(){
    long long n,d;
    cin>>n>>d;
    long long arr[n];
    for(int i=0;i<n;i++){
        int num;
        cin>>num;
        arr[i]=num;
    }
    sort(arr,arr+n);
    long long left=0,right=n-1,needed_players,c=0;
    while(right>=left){
            needed_players=d/arr[right];
        if(right-left+1>needed_players){
            c++;
            left+=needed_players;
            right--;
        }
        else{
            break;
        }
    }
    cout<<c;
}