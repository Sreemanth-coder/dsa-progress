#include<bits/stdc++.h>
using namespace std;

void dfs(int r,int c,vector<vector<int>> &vist,int dx[],int dy[],vector<vector<int>> &board){
  int n=board.size();
  int m=board[0].size();
  vist[r][c]=1;

  for(int i=0;i<4;i++){
    int nr=r+dx[i];
    int nc=c+dy[i];
    if(nr>0 && nr<n && nc>0 && nc<m && board[nr][nc]==1 && vist[nr][nc]==0){
      dfs(nr,nc,vist,dx,dy,board);
    }
  }

}



int main(){
  vector<vector<int>> board={{0,0,0,0},{1,0,1,0},{0,1,1,0},{0,0,0,0}
  };
  int n=board.size();
  int m=board[0].size();
  int cnt=0;
  vector<vector<int>> vist(n,vector<int>(m,0));
  int dx[4]={-1,0,1,0};
  int dy[4]={0,1,0,-1};

  for(int j=0;j<m;j++){
    if(board[0][j]==1 && vist[0][j]==0){
      dfs(0,j,vist,dx,dy,board);
    }
    if(board[n-1][j]==1 && vist[n-1][j]==0){
      dfs(n-1,j,vist,dx,dy,board);
    }
  }
  for(int i=0;i<n;i++){
    if(board[i][0]==1 && vist[i][0]==0){
      dfs(i,0,vist,dx,dy,board);
    }
    if(board[i][m-1]==1 && vist[i][m-1]==0){
      dfs(i,m-1,vist,dx,dy,board);
    }
  }

  for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
      if(board[i][j]==1 && vist[i][j]==0){
        cnt++;
      }
    }
  }
  cout<<cnt;
  



}