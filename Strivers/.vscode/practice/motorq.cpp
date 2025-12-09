#include<bits/stdc++.h>
using namespace std;

void m(vector<int> &nums){
  int incre=1;
  int decre=1;
  int max_le=1;
  for(int i=0;i<nums.size();i++){
    if(nums[i]<nums[i+1]){
      incre++;
      decre=1;
      
    }
    else if(nums[i]>nums[i+1]){
      decre++;
      
      incre=1;

    }
    else{
      incre=1;
      decre=1;
    }
    max_le=max(max_le,max(incre,decre));
    
  }
  cout<<max_le;

}

void m1(vector<int> &nums){
  int add=1000;
  int cont=0;
  for(int i=0;i<nums.size();i++){
    add+=nums[i];
    if(add<500){
      add-=nums[i];
    }
    else if(add>500){
      cont++;
    }
    
  }
  cout<<cont;
}

int main(){
  vector<int> nums={300,-400,-1000,400};
  m1(nums);
}
