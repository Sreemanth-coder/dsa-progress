class Solution {
public:
 bool canFinish(int V, vector<vector<int>>& nums) {
    vector<vector<int>> adj(V);
    for(auto it:nums){
        adj[it[1]].push_back(it[0]);
    }

    vector<int> indegree(V);
    for(int i=0;i<adj.size();i++){
        for(int j=0;j<adj[i].size();j++){
            indegree[adj[i][j]]++;
        }
    }
    vector<int> final;

    queue<int> q;
    for(int i=0;i<V;i++){
        if(indegree[i]==0){
            q.push(i);
        }
    }
    while(!q.empty()){
        int x=q.front();
        q.pop();
        final.push_back(x);
        for(auto it:adj[x]){
            indegree[it]--;
            if(indegree[it]==0) q.push(it);
        }

    }
    if(final.size()==V) return true;
    else return false;


       
        

        
    }
};