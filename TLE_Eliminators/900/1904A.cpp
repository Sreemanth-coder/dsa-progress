#include<bits/stdc++.h>
using namespace std;
int dx[4]={-1,1,-1,1},dy[4]={-1,-1,1,1};
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b;
    cin>>a>>b;
    int xk,yk;
    cin>>xk>>yk;
    int xq,yq;
    cin>>xq>>yq;
    int ans=0;
    set<pair<int,int>> k_hit,q_hit;
    for(int i=0;i<4;i++){
      k_hit.insert({xk+dx[i]*a,yk+dy[i]*b});
      k_hit.insert({xk+dx[i]*b,yk+dy[i]*a});

      q_hit.insert({xq+dx[i]*a,yq+dy[i]*b});
      q_hit.insert({xq+dx[i]*b,yq+dy[i]*a});
    }
    for(auto pos:k_hit){
      if(q_hit.find(pos)!=q_hit.end()){
        ans++;
      }
    }
    cout<<ans<<endl;


    
  }
}