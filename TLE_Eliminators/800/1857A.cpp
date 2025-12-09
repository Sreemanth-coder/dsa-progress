#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int even=0;
    int odd=0;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    for(int num: nums){
      if(num%2==0){
        even++;
      }
      else{
        odd++;
      }
    }
    if(even>=0 && odd>=0 && odd%2==0){
      cout<<"Yes"<<endl;
    }
    else{
     cout<<"NO"<<endl;
    }
  }
}