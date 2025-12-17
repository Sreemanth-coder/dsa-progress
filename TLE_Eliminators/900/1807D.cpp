#include<bits/stdc++.h>
using namespace std;
/*
int main(){
  int t;
  cin>>t;
  while(t--){
    int n,q;
    cin>>n>>q;
    vector<int> nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    for(int i=0;i<q;i++){
      int l,r,k;
      cin>>l>>r>>k;
      int sum=0;
      for(int i=0;i<n;i++){
        if(i>=l-1 && i<=r-1){
          sum+=k;

        }
        else{
          sum+=nums[i];
        }
      }
      if(sum%2==0){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }
    }

  }
}
  */
int main(){
  int t;
  cin>>t;
  while(t--){
    long long n,q;
    cin>>n>>q;
    vector<long long> nums(n);
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    vector<long long> prefix_sum(n+1,0);
    for(int i=1;i<n+1;i++){
      prefix_sum[i]=prefix_sum[i-1]+nums[i-1];
    }
    long long old_sum=prefix_sum[n];
    for(int i=0;i<q;i++){
      long long l,r,k;
      cin>>l>>r>>k;
      long long sum_del=prefix_sum[r]-prefix_sum[l-1];
      long long sum_add=(r-l+1)*k;
      long long final_sum=old_sum-sum_del+sum_add;
      if(final_sum%2==0){
        cout<<"NO"<<endl;
      }
      else{
        cout<<"YES"<<endl;
      }

    }
  }
}