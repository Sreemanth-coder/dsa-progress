#include<bits/stdc++.h>
using namespace std;

int main(){

  int N;
  cin>>N;
  int cnt=0;
  vector<int> nums(N);
  for(int i=0;i<N;i++){
    cin>>nums[i];
  }
  bool gg=false;
  int Min=INT_MAX;
  for(int i=0;i<N;i++){
    if(nums[i]==0){
      cout<<cnt<<endl;
      gg=true;
      break;
    }
    else if(nums[i]>0){
      Min=min(Min,nums[i]);
    }
    else if(nums[i]<0){
      Min=min(Min,-nums[i]);
    }
  }
  if(gg==false){
    cout<<Min<<endl;
  }

}