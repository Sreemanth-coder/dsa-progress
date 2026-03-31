#include<bits/stdc++.h>
using namespace std;
  void dfs(int node,vector<int> adj[],vector<int>&vist){
        vist[node]=1;
        for(auto it:adj[node]){
            if(!vist[it]){
                dfs(it,adj,vist);
            }
        }

    }
    int main {
        vector<vector<int>> isConnected={{1,1,0},{1,1,0},{0,0,1}};
        int n=isConnected.size();
        vector<int> adj[n+1];
        vector<int> vist(n+1,0);
        for(int i=0;i<n;i++){
        
          for(int j=0;j<n;j++){
            if(isConnected[i][j]==1 && i!=j){
              adj[i].push_back(j);
              adj[j].push_back(i);
            }
          }
        }
        int cnt=0;
        for(int i=0;i<n;i++){
            if(!vist[i]){
                cnt++;
                dfs(i,adj,vist);
            }
        }
        cout<<cnt;
        
    }