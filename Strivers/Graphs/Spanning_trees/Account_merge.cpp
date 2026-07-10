class DisjointSet{
  vector<int> rank,parent,size;

public:
  DisjointSet(int n){
    //assuming 1 based indexing
    rank.resize(n+1,0);
    parent.resize(n+1);
    size.resize(n+1);
    for(int i=0;i<=n;i++){
      parent[i]=i;
      size[i]=1;
    }
  }

  int findUpar(int node){
    if(node==parent[node]){
      return node;
    }
    return parent[node]=findUpar(parent[node]);
  }

  void UnionbyRank(int u,int v){
    int ult_pu=findUpar(u);
    int ult_pv=findUpar(v);
    if(ult_pu==ult_pv) return;
    if(rank[ult_pu]<rank[ult_pv]){
      parent[ult_pu]=ult_pv;
    }
    else if(rank[ult_pv]<rank[ult_pu]){
      parent[ult_pv]=ult_pu;
    }
    else{
      parent[ult_pu]=ult_pv;
      rank[ult_pu]++;
    }
  }
  void UnionbySize(int u,int v){
    int ult_u=findUpar(u);
    int ult_v=findUpar(v);
    if(ult_u==ult_v) return;
    if(size[ult_u]<size[ult_v]){
      parent[ult_u]=ult_v;
      size[ult_v]+=size[ult_u];
    }
    else{
      parent[ult_v]=ult_u;
      size[ult_u]+=size[ult_v];
    }
  }
};


class Solution {
public:
    vector<vector<string>> accountsMerge(vector<vector<string>>& accounts) {
        int n=accounts.size();
        DisjointSet ds(n);
        unordered_map<string,int> mapMailNode;
        
        for(int i=0;i<n;i++){
            for(int j=1;j<accounts[i].size();j++){
                string mail=accounts[i][j];
                if(mapMailNode.find(mail)==mapMailNode.end()){
                    mapMailNode[mail]=i;
                }
                else{
                    ds.UnionbySize(i,mapMailNode[mail]);

                }
            }
        }
        vector<vector<string>> merged(n);
        for(auto it:mapMailNode){
            string mail=it.first;
            int node=ds.findUpar(it.second);
            merged[node].push_back(mail);
        }
        vector<vector<string>> ans;
        for(int i=0;i<n;i++){
            if(merged[i].size()==0) continue;
            sort(merged[i].begin(),merged[i].end());
            vector<string> temp;
            temp.push_back(accounts[i][0]);
            for(auto it:merged[i]){
                temp.push_back(it);
            }
            ans.push_back(temp);
        }
        return ans;
        
    }
};