#include<bits/stdc++.h>
using namespace std;
void push(vector<int>&nums,int &top,int ele){
  top++;
  nums[top]=ele;
}
void pop(vector<int>&nums,int &top){
  nums.erase(nums.begin()+top);
  top--;
}
void size(vector<int>&nums,int &top){
  cout<<top+1<<endl;
}

int main(){
  vector<int> nums={0,0,0,0,0};
  int top=-1;
  push(nums,top,2);
  //pop(nums,top);
  push(nums,top,3);
  push(nums,top,4);
  push(nums,top,5);
  push(nums,top,6);
  pop(nums,top);
  size(nums,top);

  for(auto num:nums){
    cout<<num<<" "; 
  }




}
