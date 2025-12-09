#include<bits/stdc++.h>
using namespace std;


/*
class Solution {
public:
    bool yes(int n,stack<int> st){
        if(st.top()==n) return false;
        while(!st.empty()){
            if(st.top()==n){
                return true;
            }
            st.pop();
        }
        return false;

    }
    int check(int n,stack<int> st){
        int top1,top2;
        while(!st.empty()){
            top1=st.top();
            st.pop();
            top2=st.top();
            if(top2==n){
                return top1;
            }

        }
        return 0;

    }
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> st;
        vector<int> final; 
        st.push(nums2[0]);
        for(int i=1;i<nums2.size();i++){
            if(nums2[i]>st.top()){
                st.push(nums2[i]);
            }

        }
        for(int i=0;i<nums1.size();i++){
            if(yes(nums1[i],st)){
                final.push_back(check(nums1[i],st));
            }
            else{
                final.push_back(-1);
            }


        }

        return final;
        
    }
};
*/

int check(int n,vector<int>&nums2){
  if(n==nums2[nums2.size()-1]) return -1;
  for(int i=0;i<nums2.size();i++){
    if(n==nums2[i]){
      for(int j=i+1;j<nums2.size();j++){
        if(nums2[j]>n){
          return nums2[j];
        }
      }
    }

  }
  return -1;
}


void m1(vector<int> &nums1,vector<int>&nums2){
  vector<int> final;
  for(int x:nums1){
    final.push_back(check(x,nums2));
  }
  for(int x:final){
    cout<<x<<" ";
  }


}

int main(){
  vector<int> nums1={2,4};
  vector<int> nums2={1,2,3,4};
  m1(nums1,nums2);
}