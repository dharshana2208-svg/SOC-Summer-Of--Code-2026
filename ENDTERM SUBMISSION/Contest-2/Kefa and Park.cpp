#include <iostream>
#include <vector>

using namespace std;
int n,m;
    vector<int> cats;
    vector<vector<int>> adj;
    int ans=0;

void dfs(int u,int p,int consecutive){
    if(cats[u]){
        consecutive++;
    }
    else{
        consecutive=0;
    }
    if(consecutive>m){
        return;
    }
    bool is_leaf=true;
    for(int v:adj[u]){
        if(v!=p){
            is_leaf=false;
            dfs(v,u,consecutive);
        }
    }
    if(is_leaf&&u!=1){
        ans++;
    }
}
int main(){
    cin>>n>>m;
    cats.resize(n+1);
    for(int i=1;i<=n;i++){
        cin>>cats[i];
    }
    adj.resize(n+1);
    for(int i=0;i<n-1;i++){
        int u,v;
        cin>>u>>v;
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    dfs(1,0,0);
    cout<<ans<<endl;
}
