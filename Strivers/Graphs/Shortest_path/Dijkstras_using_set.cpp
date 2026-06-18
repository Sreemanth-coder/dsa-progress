#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<vector<pair<int,int>>> adj={{{1,9}},{{0,9}}};
  int n=2;

  set<pair<int,int>> st;
  vector<int> dist(n,1e9);
  st.insert({0,0});
  dis[0]=0;
  while(!st.empty()){
    auot it = *(st.begin());
    int node=it.second;
    int dist=it.first;
    st.erase(it);
    for(auto it:adj[node]){
      int adjNode=it[0];
      int edgW=it[1];

      if(dist+edgW<dis[adjNode]){
        if(dis[adjNode]!=1e9){
          st.erase({dis[adjNode],adjNode});
        }
        dis[adjNode]=dist+edgW;
        st.insert({dis[adjNode],adjNode});
      }

    }
  }

}