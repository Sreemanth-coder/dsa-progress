#include<bits/stdc++.h>
using namespace std;

void set_zeros(vector<vector<int>> &nums){
    //O(n^2) time compexity
    vector<pair<int,int>> p;
    
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++){
            if(nums[i][j]==0){
                p.push_back({i,j});
            }
        }
    }
    
    for(auto it:p){
        for(int i=0;i<nums[it.first].size();i++){
            nums[it.first][i]=0;
        }
        for(int i=0;i<nums.size();i++){
            nums[i][it.second]=0;
        }
    }
    
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++){
            cout<<nums[i][j];
        }
        cout<<endl;
    }

}


int main(){
    vector<vector<int>> nums={{0,1,2,0},{3,4,5,2},{1,3,1,5}};
    set_zeros(nums);
}