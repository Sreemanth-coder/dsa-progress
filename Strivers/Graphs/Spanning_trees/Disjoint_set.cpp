#include<bits/stdc++.h>
using namespace std;

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

int main(){
  DisjointSet ds(7);
  ds.UnionbySize(1,2);
  ds.UnionbySize(2,3);
  ds.UnionbySize(4,5);
  ds.UnionbySize(6,7);
  ds.UnionbySize(5,6);
  if(ds.findUpar(3)==ds.findUpar(7)){
    cout<<"Same Comp";
  }
  else{
    cout<<"diff comp";
  }

  ds.UnionbyRank(3,7);
  if(ds.findUpar(3)==ds.findUpar(7)){
    cout<<"Same Comp";
  }
  else{
    cout<<"diff comp";
  }


}