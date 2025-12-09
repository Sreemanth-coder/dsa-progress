#include<bits/stdc++.h>
using namespace std;

void m1(vector<int> &nums,int m,int k){
  if(nums.size()< m*k){
    cout<<-1;
    return;
  }
  int day=0;
  while(true){

    for(int i=0;i<nums.size();i++){
      if(nums[i]==0){
        continue;
      }
      else{
        nums[i]-=1;
      }
    }
    day++;
    int bouquets=0,count=0;
    for(int i=0;i<nums.size();i++){
      if(nums[i]==0){
        count++;
        if(count==k){
          bouquets++;
          count = 0;
          
        }
      }
      else{
        count=0;
      }

    }
    if(bouquets>=m){
      cout<<day;
      return;
    }

  }
 
}


int main(){
  vector<int> nums={7,7,7,7,12,7,7};
  int m=2,k=3;
  m1(nums,m,k);
}