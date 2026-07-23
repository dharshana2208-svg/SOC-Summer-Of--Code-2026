#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
    vector<vector<int>>intervals={{1,3},{2,6},{8,10},{15,18}};
    if(!intervals.empty()){
        sort(intervals.begin(),intervals.end());
        vector<vector<int>>result;
        result.push_back(intervals[0]);
        for(size_t i=1;i<intervals.size();++i){
            int last_index=result.size()-1;
            if(intervals[i][0]<=result[last_index][1]){
                if(intervals[i][1]>result[last_index][1]){
                    result[last_index][1]=intervals[i][1];
                }
            }
            else{
                result.push_back(intervals[i]);
            }
        }
        
        intervals=result;
    }
    for(size_t i=0;i<intervals.size();++i){
        cout<<intervals[i][0]<<","<<intervals[i][1]<<endl;
    }
}
