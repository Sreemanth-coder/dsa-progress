#include<bits/stdc++.h> 
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n,k;
    cin>>n>>k;
    bool gg=false;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    for(int i=0;i<n;i++){
      if(nums[i]==k){
        cout<<"Yes"<<endl;
        gg=true;
        break;
      }
    }
    if(gg==false){
      cout<<"NO"<<endl;
    }
  }
}