#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  int dif;
  cin>>dif;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  int total=0;
  for(int i=0;i<n;i++){
    total+=nums[i];
  }
  int k=(total+dif)/2;
  vector<int> prev(k+1,0),curr(k+1,0);
  prev[0]=1;
  if(nums[0]<=k) prev[nums[0]]+=1;
  for(int i=1;i<n;i++){
    for(int j=1;j<k+1;j++){
      int not_take=prev[j];
      int take=0;
      if(nums[i]<=j){
        take=prev[j-nums[i]];
      }
      curr[j]=take+not_take;
    }
    prev=curr;
  }
  cout<<prev[k];


}