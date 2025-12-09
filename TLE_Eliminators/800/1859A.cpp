#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> nums(n);
    vector<int> b;
    vector<int> c;
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    sort(nums.begin(),nums.end());
    b.push_back(nums[0]);
    for(int i=1;i<nums.size();i++){
      if(nums[i]==b[0]){
        b.push_back(nums[i]);
      }
      else{
        c.push_back(nums[i]);
      }
    }
    if(b.size()==0 || c.size()==0){
      cout<<-1<<endl;
      continue;
    }
    cout<<b.size()<<" "<<c.size()<<endl;
    for(int num :b){
      cout<<num<<" ";
    }
    cout<<endl;
    for(int num:c){
      cout<<num<<" ";
    }
    cout<<endl;

  }
}