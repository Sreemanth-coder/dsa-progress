#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    vector<int> prefix(n);
    prefix[0]=nums[0];
    for(int i=1;i<n;i++){
      prefix[i]=nums[i]+prefix[i-1];
    }
    for(int i=0;i<n;i++){
      cout<<prefix[i]<<" ";
    }
    
    for(int i=1;i<n;i++){
      if()
    }
  }
}