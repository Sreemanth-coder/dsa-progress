#include<bits/stdc++.h>
using namespace std;

int m1(vector<int>&nums){
  int ans=0;
  for(int i=0;i<nums.size();i++){
    if(nums[i]>0 && i+1<nums.size()){
      int height=0;
       for (int j = i + 1; j < nums.size(); j++) {
        if (nums[j] >= nums[i]) {
          height = min(nums[i], nums[j]) - nums[i + 1];
          break;
        }
      }
      if(height<=0) continue;
      int breadth=0;
      for(int j=i+1;j<nums.size();j++){
        if(nums[j]>=nums[i]){
          break;
        }
        
        breadth++;

      }
      ans+=(height*breadth);
    }

  }
  return ans;

}


int main(){
  vector<int> nums={4,2,0,3,2,5};
  cout<<m1(nums);
}