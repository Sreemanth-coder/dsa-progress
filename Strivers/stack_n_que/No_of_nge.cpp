#include<bits/stdc++.h>
using namespace std;

void m1(vector<int>&nums,vector<int>&index){
  for(int i=0;i<index.size();i++){
    int num=nums[index[i]];
    int cnt=0;
    for(int j=0;j<nums.size();j++){
      if(num==nums[j]){
        for(int k=j+1;k<nums.size();k++){
          if(nums[k]>num){
            cnt++;
          }
        }
      }
    }
    cout<<cnt<<endl;
  }

}

int Count(int n,vector<int>&nums){
  stack<int> st;
  int cnt=0;
  for(int i=nums.size()-1;i>=0;i--){
    st.push(nums[i]);
    if(st.top()>n) cnt++;
    else if(st.top()==n) return cnt;
    
  }
  while(!st.empty()){
    st.pop();
  }
  return cnt;
}
void m2(vector<int>&nums,vector<int>&index){
  int n=
  
}

int main(){
  vector<int> nums={1,2,3,4,1};
  vector<int> index={0,3};
  m2(nums,index);
}