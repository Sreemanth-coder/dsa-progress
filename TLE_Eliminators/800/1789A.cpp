#include<bits/stdc++.h>
#include<numeric>
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
    int g=nums[0];
    int flag=0;
    for(int i=0;i<n;i++){
      for(int j=i+1;j<n;j++){
        if(__gcd(nums[i],nums[j])<=2){
          flag=1;
        }

      }
    }
    if(flag==1){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }


  }

}