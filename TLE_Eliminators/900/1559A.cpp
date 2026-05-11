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
    int tar=nums[0];
    for(int i=1;i<n;i++){
      tar&=nums[i];
      
    }
    cout<<tar<<endl;
  }
}