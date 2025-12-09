#include<bits/stdc++.h>
using namespace std;

vector<int> m1(vector<int>&nums){
  vector<int> ans;
  stack<int> st;
  for(int x:nums){
    st.push(x);
  }
  while(!st.empty()){
    if(st.top()<0){
      int top=st.top();
      st.pop();
      if(top+st.top()>0){
        ans.push_back(st.top());
        st.pop();
      }
      else{
        while(!st.empty() && top+st.top()<0) st.pop();
        ans.push_back(st.top());
        st.pop();
      }
    }
    ans.push_back(st.top());
  }
  return ans;

}

void m2(vector<int>&nums){
  stack<int> s1;
  for(int x:nums){
    if(x>0){
      s1.push(x);

    }
    else{
      while(abs(x)>=s1.top()){
        s1.pop();
      }
    }
  }
  while(!s1.empty()){
    cout<<s1.top()<<" ";
    s1.pop();
  }
}
int main(){
  vector<int> nums={10,2,-5};
 m2(nums);
  
}
