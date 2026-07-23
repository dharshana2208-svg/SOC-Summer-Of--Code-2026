#include<iostream>
#include<string>

using namespace std;

int main(){
    string word1,word2;
    cin>>word1>>word2;
    int len1=word1.length();
    int len2=word2.length();
    bool check=true;
    if (len1==len2){
        for(int i=0;i<len1;i++){
            if(word1[i]!=word2[len1-i-1]){
                check=false;
                break;
            }
        }
    }
    if (check==true && len1==len2){
        cout<<"YES";
    }
    else if(len1!=len2){
        cout<<"NO";
    }
    else if(check==false && len1==len2){
        cout<<"NO";
    }
}