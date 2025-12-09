#include<bits/stdc++.h>
using namespace std;

void Single(vector<int> &nums){
  int left=0,right=nums.size()-1;

  while(left<=right){
    int mid=(left+right)/2;
    if(nums[mid]==nums[mid+1] && right<3){
      cout<<nums[mid-1];
      break;
    }
    else if(nums[mid]==nums[mid-1] && right<3){
      cout<<nums[mid+1];
      break;
    }
    else if(nums[mid]==nums[mid+1]){
      left=mid+2;
    }
    else if(nums[mid]==nums[mid-1]){
      right=mid-2;
    }
    
    
  }


}
int main(){
  vector<int> nums={3,3,7,7,10,11,11};
  Single(nums);

}
