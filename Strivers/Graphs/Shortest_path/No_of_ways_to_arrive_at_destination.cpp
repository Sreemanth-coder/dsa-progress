class Solution {
public:
    int countPaths(int n, vector<vector<int>>& roads) {
        vector<vector<pair<int,int>>> adj(n);
        for(auto it:roads){
            adj[it[0]].push_back({it[1],it[2]});
            adj[it[1]].push_back({it[0],it[2]});
        }
        const int MOD = 1e9 + 7;

        priority_queue<pair<long long,int>,vector<pair<long long,int>>,greater<pair<long long,int>>> pq;
        pq.push({0,0});
        vector<long long> dist(n,1e18);
        dist[0]=0;
        vector<int> ways(n,0);
        ways[0]=1;
        
        while(!pq.empty()){
            int node=pq.top().second;
            long long dis=pq.top().first;
            pq.pop();
            
            for(auto it:adj[node]){
                
                if(dis+it.second<dist[it.first]){
                    dist[it.first]=dis+it.second;
                    ways[it.first]=ways[node];
                    pq.push({dist[it.first],it.first});
                    
                }
                else if(dis+it.second==dist[it.first]){
                    ways[it.first]=(ways[it.first]+ways[node])% MOD;
                }
            }
        }
        return ways[n-1];

        
    }
};