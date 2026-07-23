#include<iostream>
#include<string>

using namespace std;

int main(){
    string word1,word2;
    cin>>word1>>word2;
    int len=word1.length();
    bool check=true;
    for (int i=0;i<len;i++){
        word1[i]=tolower(word1[i]);
        word2[i]=tolower(word2[i]);
        if (word1[i]<word2[i]){
            cout<<"-1";
            check=false;
            break;
        }
        else if(word1[i]>word2[i]){
            cout<<'1';
            check=false;
            break;
        }
        else{
            
        }
    }
    if(check==true){
        cout<<'0';
    }
}