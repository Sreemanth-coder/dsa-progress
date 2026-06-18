#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<vector<int>> grid={{0,0,0},{1,1,0},{1,1,0}};
  int n=grid.size();
        
        if(grid[0][0]==1 || grid[n-1][n-1]==1) cout<<-1;
        if(n==1) cout<<1;
        priority_queue <pair<int,pair<int,int>>,vector<pair<int,pair<int,int>>>,greater<pair<int,pair<int,int>>>> pq;

        pq.push({1,{0,0}});
        vector<vector<int>> dist(n,vector<int> (n,1e9));
        dist[0][0]=0;
        int rx[8]={-1,-1,0,1,1,1,0,-1};
        int ry[8]={0,1,1,1,0,-1,-1,-1};
        while(!pq.empty()){
            
            int dis=pq.top().first;
            int i=pq.top().second.first;
            int j=pq.top().second.second;
            pq.pop();
            for(int k=0;k<8;k++){
                int nr=i+rx[k];
                int nc=j+ry[k];
                if(nr>=0 && nc>=0 && nr<n && nc<n && grid[nr][nc]==0 && dis+1<dist[nr][nc]){
                    dist[nr][nc]=dis+1;
                    pq.push({dist[nr][nc],{nr,nc}});

                }
            }
        }
        if(dist[n-1][n-1]!=1e9) cout<<dist[n-1][n-1];
        else cout<<-1;
}