#include<bits/stdc++.h>
unsing namespace std;


int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  if(n==2){
    return abs(nums[0]-nums[1]);
  }
  

}