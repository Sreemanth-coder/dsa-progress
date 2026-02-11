#include<bits.stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  vector<int>temp;
  for(int i=0;i<n-1;i++){
    int check=0;
    for(int j=0;j<n;j++){
      if(nums[i]%nums[j]==0 || nums[j]%nums[i]==0){
        check++;
      }
    
    }
    if(check== n-i+1){
      
    }
  }
}