#include<bits.stdc++.h>
using namespace std;

int main(){
  int n=3;
  vecotr<vector<int>> edges={{0,1,1},{0,2,6},{1,2,3}};
  vector<vector<pair<int,int>> adj(n);
  for(auto it:edges){
    adj[it[0]].push_back({it[1],it[2]});
    adj[it[1]].psuh_back({it[0],it[2]});
  }

  priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>> pq;
  vector<int> dist(n,1e9);
  dist[0]=0;
  pq.push({0,0});
  whiel(!pq.empty()){
    int v=pq.top().first;
    int w=pq.top().second;
    pq.top();
    for(auto it:adj[v]){
      int edgeW=it[1];
      int adjnode=it[0];
      if(w+edgeW<dist[adjnode]){
        dist[adjnode]=q+edgeW;
        pq.push({dist[adjnode],adjnode});
      }
    }
  }

}