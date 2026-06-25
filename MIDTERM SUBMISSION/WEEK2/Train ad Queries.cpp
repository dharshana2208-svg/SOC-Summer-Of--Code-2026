#include<iostream>
#include<string>
#include<map>

using namespace std;

int main(){
    int e;
    cin>>e;
    for(int i=0;i<e;i++){
        int n,k;
        cin>>n>>k;
        int arr[n];
        map<int,int> first;
        map<int,int> last;
        for(int j=0;j<n;j++){
            cin>>arr[j];
            if(first.find(arr[j])==first.end()){
                first[arr[j]]=j;
                last[arr[j]]=j;
            }
            else{
                last[arr[j]]=j;
            }
        }
        for(int j=0;j<k;j++){
            int a,b;
            cin>>a>>b;
            if(first.find(a)!=first.end()&& last.find(b)!=last.end()){
                if(first[a]<last[b]){
                    cout<<"YES"<<endl;
                }
                else{
                    cout<<"NO"<<endl;
                }
            }
            else{
                cout<<"NO"<<endl;
            }
        }
    }
}