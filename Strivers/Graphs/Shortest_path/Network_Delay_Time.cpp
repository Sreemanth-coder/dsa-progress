class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<vector<pair<int,int>>> adj(n+1);
        for(auto it:times){
            adj[it[0]].push_back({it[1],it[2]});
        }
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>> pq;
        vector<int> dist(n+1,1e9);
        dist[k]=0;
        pq.push({0,k});
        while(!pq.empty()){
            auto it=pq.top();
            int node=it.second;
            int dis=it.first;
            pq.pop();

            for(auto it1:adj[node]){
                if(dis+it1.second<dist[it1.first]){
                    dist[it1.first]=dis+it1.second;
                    pq.push({dist[it1.first],it1.first});
                }
            }

        }
        int maxi=INT_MIN;
        for(int i=1;i<n+1;i++){
            if(dist[i]==1e9){
                return -1;
            }
            else{
                maxi=max(maxi,dist[i]);
            }
        }
        return maxi;

        
    }
};