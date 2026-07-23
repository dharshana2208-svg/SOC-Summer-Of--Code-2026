#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    int r;
    cin>>r;
    while(r--){
        int n;
        cin>>n;
        string vec1,vec2(n,'?');
        cin>>vec1;
        bool check_null=false;
        int index=-1;
        for(int i=0;i<n;i++){
            if(vec1[i]!='?'){
                vec2[i]=vec1[i];
                check_null=true;
            }
        }
        if(check_null==false){
            for(int i=0;i<n;i++){
                vec2[i]=(i%2!=0)?'B':'R';
            }
        }
        else{
            for(int i=1;i<n;i++){
                if(vec1[i]=='?'&&vec2[i-1]!='?'){
                    vec2[i]=(vec2[i-1]=='R')?'B':'R';
                }
            }
            for(int i=n;i>=0;i--){
                if(vec2[i]=='?'&&vec2[i+1]!='?'){
                    vec2[i]=(vec2[i+1]=='R')?'B':'R';
                }
            }
        }
        cout<<vec2<<endl;
    }
}