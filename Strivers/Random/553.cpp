#include<bits/stdc++.h>
using namespace std;

void m1(vector<int> &nums){
  string res="";
  for(int i=0;i<nums.size();i++){
    res+=nums[i];
    if(i<nums.size()-1){
      res+='/';
    }
    
  }

}


int main(){
  vector<int> nums={1000,100,10,2};
  m1(nums);
}