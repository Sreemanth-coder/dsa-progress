#include<bits/stdc++.h>
using namespace std;


//dfs + cycle detection

class Solution {

    public:
   
    bool dfs(int node,vector<int> &vist,vector<int> &pathvist,vector<vector<int>> &graph,vector<int> &check){
        vist[node]=1;
        pathvist[node]=1;
        check[node]=0;

        for(auto it:graph[node]){
            if(!vist[it]){
                
                if(dfs(it,vist,pathvist,graph,check)==true){
                    check[node]=0;
                    return true;
                }
            }
            else if(pathvist[it]){
                check[node]=0;
                return true;

            }
        }
        check[node]=1;
        pathvist[node]=0;
        return false;
    }
    


public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>> adj(n);
       
        vector<int> vist(n,0);
        vector<int> pathvist(n,0);
        vector<int> check(n,0);
        vector<int> final;
        for(int i=0;i<n;i++){
            if(!vist[i]){
                dfs(i,vist,pathvist,graph,check);
            }
        }

        for(int i=0;i<n;i++){
            if(check[i]==1){
                final.push_back(i);
            }
        }
        return final;
        
    }
};
