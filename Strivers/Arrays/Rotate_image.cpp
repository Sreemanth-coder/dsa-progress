#include<bits/stdc++.h>
using namespace std;

void m1(vector<vector<int>> &nums){
    
    int n=nums.size();
    vector<vector<int>> final(n,vector<int>(n,0));
    for(int i=0;i<nums.size();i++){
        for(int j=0;j<nums[i].size();j++){
            final[j][n-1-i]=nums[i][j];
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<nums[i].size();j++){
            cout<<nums[i][j]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
    for(int i=0;i<final.size();i++){
        for(int j=0;j<final[i].size();j++){
            cout<<final[i][j]<<" ";
        }
        cout<<endl;
    }

}

int main(){
    vector<vector<int>> nums={{1,2,3},{4,5,6},{7,8,9}};
    m1(nums);
}