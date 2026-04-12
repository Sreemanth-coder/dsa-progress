#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<vector<int>> image={{1,1,1},{1,1,0},{1,0,1}};
  int color=2;
  int n=image.size();
    int m=image[0].size();
    
    queue<pair<int,int>> q;
    vector<vector<int>> vist=image;
    q.push({sr,sc});
    vist[sr][sc]=color;

    int initialcolor=image[sr][sc];
    if(initialcolor==color){
        //print image array
    }
        

    int dx[]{-1,0,1,0};
    int dy[]={0,1,0,-1};
    while(!q.empty()){
        int r=q.front().first;
        int c=q.front().second;
        q.pop();
        for(int i=0;i<4;i++){
            int nr=r+dx[i];
            int nc=c+dy[i];
            if(nr>=0 && nr<n && nc>=0 && nc<m && vist[nr][nc]!=color && image[nr][nc]==initialcolor){
                q.push({nr,nc});
                vist[nr][nc]=color;
            }
        }
    }
    
    //print vist array
    
}