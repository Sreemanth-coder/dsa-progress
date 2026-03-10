#include<bits/stdc++.h>
using namespace std;



int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> index;
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    
    for(int i=0;i<n;i++){
      if(nums[i]==0){
        index.push_back(i);
      }
    }
    if(index.size()==1 || index.size()==0) {
      cout<<1<<endl;
      continue;
    }

    int op=0;
    for(int i=index.size()-1;i>=0;i--){
      if(index[i]-index[i-1]>1 && i-1>=0){
        op++;
      }
    }
    cout<<op<<endl;
    
  }
}