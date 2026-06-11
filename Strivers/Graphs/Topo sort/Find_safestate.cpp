#include<bits/stdc++.h>
using namespace std;


//dfs + cycle detection
/*
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

*/
class solution{

public:
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n=graph.size();
        vector<vector<int>> adj(n);
       
        //vector<int> vist(n,0);
        //vector<int> pathvist(n,0);
        //vector<int> check(n,0);
        vector<int> final;
        for(int i=0;i<n;i++){
            for(int j=0;j<graph[i].size();j++){
                adj[graph[i][j]].push_back(i);
            }
        }
        vector<int> indegree(n,0);
        for(int i=0;i<n;i++){
            for(int j=0;j<adj[i].size();j++){
                indegree[adj[i][j]]++;
            }
        }

        queue<int> q;
        for(int i=0;i<n;i++){
            if(indegree[i]==0){
                q.push(i);
            }
        }

        while(!q.empty()){
            int node=q.front();
            q.pop();
            final.push_back(node);
            for(int it:adj[node]){
                indegree[it]--;
                if(indegree[it]==0){
                    q.push(it);
                }
            }
        }
        

        sort(final.begin(),final.end());
        return final;
        
    }
};