#include<bits/stdc++.h>
using namespace std;

void m1(vector<int>&nums,int k){
  
  int n=nums.size();
  int index=0;
  int ver=0;
  for(int i=1;i<=2000;i++){
    if(i==nums[index]){
      index++;
      
    }
    
    else{
      
      ver++;
    }
    if(ver==k){
      cout<<i;
      break;
    }

    
  }

}


void m2(vector<int> &nums,int k){
  vector<int> bs;
  for(int i=0;i<nums.size();i++){
    bs.push_back(nums[i]-(i+1));
  }
  int low=0,high=bs.size()-1;
  

  while(low<=high){
    int mid=(low+high)/2;
    if(bs[mid]<k){
      low=mid+1;
    }
    else if(bs[mid]>k){
      high=mid-1;
    }

  }
  cout<<nums[high]+(k-bs[high]);

}


int main(){
  vector<int> nums={2,3,4,7,11};
  int k=5;
  m2(nums,k);

}