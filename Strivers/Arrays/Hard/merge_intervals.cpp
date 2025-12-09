#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> brute(vector<vector<int>> &nums){
    vector<vector<int>> res;
    if(nums.empty()) return res;
    sort(nums.begin(),nums.end());

    res.push_back(nums[0]);
    for(int i=1;i<nums.size();i++){
        if(nums[i][0]<=res.back()[1] ){
            res.back()[1]=max(nums[i][1],res.back()[1]);
        }
        else{
            res.push_back(nums[i]);
        }
    }
    return res;



}

int main(){
    vector<vector<int>> nums={{1,3},{2,6},{8,10},{15,18}};
    vector<vector<int>> final=brute(nums);
    for(auto it:final){
        cout<< it[0]<<" "<<it[1]<<endl;
    }
    

}