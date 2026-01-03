#include<bits/stdc++.h>
using namespace std;

int rcp(int ind,int N,vector<int>&nums){
  if(ind==0){
    return N*nums[0];
  }
  int not_pick=rcp(ind-1,N,nums);
  int pick=INT_MIN;
  if((ind+1)<=N){
    pick=nums[ind]+rcp(ind,N-(ind+1),nums);
  }
  return max(pick,not_pick);

}
 




int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  cout<<rcp(n-1,n,nums);


}