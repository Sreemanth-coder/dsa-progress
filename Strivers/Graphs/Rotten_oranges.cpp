#include<bits/stdc++.h>
using namespace std;


int main(){
  vector<vector<int>> grid={{2,1,1},{1,1,0},{0,1,1}};
  int n=grid.size();
  int m=grid[0].size();
  int minutes=0;
  queue<pair<pair<int,int>,int>> q;
  int t=0;
  int fresh=0;
  vector<vector<int>> vist(n,vector<int>(m,0));
  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(grid[i][j]==2){
        q.push({{i,j},0});
        vist[i][j]=2;
      }
      else if(grid[i][j]==1){
        fresh++;
      }
    }
  }
  int tm=0;
  int dx[]={-1,0,1,0};
  int dy[]={0,1,0,-1};
  
  while(!q.empty()){
    
    int r=q.front().first.first;
    int c=q.front().first.second;
    int t=q.front().second;
    tm=max(tm,t);
    for(int i=0;i<4;i++){
      int nr=r+dx[i];
      int nc=c+dy[i];
      if(nr>=0 && nr<n && nc>=0 && nc<m && vist[nr][nc]!=2 && grid[nr][nc]==1){
        q.push({{nr,nc},t+1});
        fresh--;
        vist[nr][nc]=2;
      }
    }
  }
  if(fresh>0) cout<<-1<<endl;
  else cout<<tm<<endl;


}