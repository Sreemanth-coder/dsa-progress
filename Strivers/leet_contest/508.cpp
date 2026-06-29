#include<bits/stdc++.h>
using namespace std;

int main(){
  int k=3;
  int mul=2;
  vector<int> nums={6,1,2,9};
  sort(nums.begin(),nums.end(),greater<int>());
  
  int i=0;
  long long tot_sum=0;
  
  while(i<k){
      if(mul>0){
          tot_sum+=mul*nums[i];
          mul--;
          i++;
      }
      else{
          tot_sum+=nums[i];
          i++;
      }
      
  }
  cout<<tot_sum;
}


