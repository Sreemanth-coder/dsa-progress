#include<bits/stdc++.h>
using namespace std;

/*

//Binary Search
int main(){
  vector<int> nums={1};
  int left=0;
  int target=1;
  int right=nums.size()-1;
  while(left<=right){
    int mid=(left+right)/2;
    if(nums[mid]<target){
      left=mid+1;
    }
    else if(nums[mid]>target){
      right=mid-1;
    }
    else if(nums[mid]==target){
      cout<<"yes"<<endl;
      return 0;
    }
  }
  cout<<"no"<<endl;
  return 0;
}
  */
 //lower bound and upper bound
 int main(){

  vector<int> nums={3,5,8,15,19};
  int target=9;
  int left=0;
  int right=nums.size()-1;
  int index=INT_MAX;
  while(left<=right){
    int mid=left+(right-left)/2;
    if(nums[mid]<target){
      left=mid+1;
    }
    else if(nums[mid]>=target){
      right=mid-1;
      index=min(index,mid);
    }
  }
  cout<<index;
 }