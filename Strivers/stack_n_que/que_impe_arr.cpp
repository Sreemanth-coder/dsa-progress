#include<bits/stdc++.h>
using namespace std;


void push(vector<int> &nums,int &front,int ele){
  front++;
  nums[front]=ele;
}
int pop(vector<int> &nums,int &rear){
  rear++;
  int res=nums[rear];
  nums.erase(nums.begin()+rear);
  return res;
}
int peek(vector<int> &nums,int front){
  return nums[front];
}





int main(){
  vector<int> nums={0,0,0,0,0};
  int front=-1,rear=-1;
  push(nums,front,2);
  push(nums,front,3);
  push(nums,front,4);
  push(nums,front,5);
  push(nums,front,6);
  cout<<pop(nums,rear)<<endl;
  cout<<peek(nums,front);

  /*
  for(auto num:nums){
    cout<<num<<" ";
  }
    */




  

}