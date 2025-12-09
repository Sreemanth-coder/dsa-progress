#include<bits/stdc++.h>
using namespace std;

void m1(vector<vector<int>> &nums){
   int n=nums.size();
   int left=0,top=0;
   int right=nums[0].size()-1,bott=n-1;
   while(top<=bott && left<=right){
    for(int i=left;i<=right;i++){
        cout<<nums[top][i]<<" ";
    }
    top++;
    if(top<=bott){
        for(int i=top;i<=bott;i++){
            cout<<nums[i][right]<<" ";
        }
        right--;
    }
    if(left<=right && top<=bott){
        for(int i=right;i>=left;i--){
            cout<<nums[bott][i]<<" ";
        }
        bott--;
    }
    if(top<=bott && left<=right){
        for(int i=bott;i>=top;i--){
            cout<<nums[i][left]<<" ";
        }
        left++;
    }
    
    }

}

int main(){
    vector<vector<int>> nums={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
    m1(nums);
}