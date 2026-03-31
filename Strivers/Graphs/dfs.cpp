#include<bits/stdc++.h>
using namespace std;

void dfs(int node,vector<int> adj[] ,vector<int> &vist,vector<int>&ls){
  vist[node]=1;
  ls.push_back(node);
  for(auto it:adj[node]){
    if(!vist[it]){
      dfs(it,adj,vist,ls);
    }
  }
}

int main(){
  int v;
  cin>>v;
  vector<int> adj[v+1];
  adj[1]={2,3};
  adj[2]={1,5,6};
  adj[3]={1,4,7};
  adj[4]={3,8};
  adj[5]={2};
  adj[6]={2};
  adj[7]={3,8};
  adj[8]={4,7};
  vector<int> vist(v+1,0);
  vector<int> ls;
 
  int start=1;
  dfs(start,adj,vist,ls);
  for(int x:ls){
    cout<<x<<" "; 
  }

}
