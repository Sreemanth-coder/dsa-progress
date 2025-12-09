#include<bits/stdc++.h>
using namespace std;


bool Swap(vector<vector<int>> &nums,int i,int j){
  if(nums[i+1][j]==0){
    for(int k=i;k<i+1;k++){
      for(int l=0;l<nums[0].size();l++){
        swap(nums[i][j],nums[i+1][j]);

      }
    }
    return true;

  }
  else{
    return false;
  }


}



void m1(vector<vector<int>> &nums){
  int result=0;
  for(int i=0;i<nums.size()-1;i++){
    for(int j=nums.size()-1;j>i;j--){
      if(nums[i][j]==0){
        continue;
      }
      else if(Swap(nums,i,j)){
        result++;
        break;
      }
      else{
        cout<<-1;
      }


    }
  }
  cout<<result;

}

int main(){
  vector<vector<int>> nums={{0,0,1},{1,1,0},{1,0,0}};
  m1(nums);
}