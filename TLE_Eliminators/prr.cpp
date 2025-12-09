#include<bits/stdc++.h>
using namespace std;


void m1(vector<int> &nums){
  map<int,int> mp;
  for(int num:nums){
    mp[num]++;
  }
  vector<int> tuple;
  for(auto m:mp){
    if(m.second==3) tuple.push_back(m.first);
  }
  

}

int main(){
  vector<int> nums={1,2,1,1,3};
  m1(nums);
}