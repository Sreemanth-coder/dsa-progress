class Solution{
    public:
    int spanningTree(int V, vector<vector<int>> adj[]) {
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>> pq;
        vector<int> vist(V,0);
        int sum=0;
        pq.push({0,0,-1});
        while(!pq.empty()){
            auto it=pq.top();
            pq.pop();
            int wt=it[0];
            int node=it[1];
            int parent=it[2];
            if(vist[node]==1) continue;
            vist[node]=1;
            sum+=wt;
            for(auto it1:adj[node]){
                if(!vist[it1[0]]){
                    pq.push({it1[1],it1[0],node});

                }

            }
        }
        return sum;
       
    }
};
