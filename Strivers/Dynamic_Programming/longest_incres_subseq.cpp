#include<bits/stdc++.h>
using namespace std;




/*
int main(){
  int n;
  cin>>n;
  vector<int> nums(n);
  
  for(int i=0;i<n;i++){
    cin>>nums[i];
  }
  long ll=INT_MIN;

  for(int i=0;i<n;i++){
    int num=nums[i];
    long length=1;
    for(int j=i+1;j<n;j++){
      if(nums[j]>num){
        length++;
        num=nums[j];
      }
    }
    ll=max(ll,length);
  }
  cout<<ll;

}
*/

  int main(){
    int n;
    cin>>n;
    vector<int> nums(n);
    
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    vector<int> temp;
    temp.push_back(nums[0]);

    for(int i=1;i<n;i++){
      if(nums[i]>temp.back()){
        temp.push_back(nums[i]);
      }
      else{
        for(int j=0;j<temp.size();j++){
          if(temp[j]>nums[i]){
            temp[j]=nums[i];
          }
        }
      }
    }
    cout<<temp.size();

  }
