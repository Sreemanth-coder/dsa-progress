#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int nn=0;
    int np=0;
    int op=0;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    
    for(int i=0;i<n;i++){
      if(nums[i]==1){
        np++;
      }
      else{
        nn++;
      }
    }
    while(np<nn || nn%2==1){
      op++;
      np++;
      nn--;
    }
    cout<<op<<endl;
   
  }

}