#include<bits/stdc++.h>
using namespace std;
/*
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> nums(n);
    int Min=INT_MAX;
    int flag=0;
    for(int i=0;i<n;i++){
      cin>>nums[i];
    }
    for(int i=0;i<n;i++){
      long long s1=1;
      long long s2=1;
      for(int j=0;j<=i;j++){
        
        s1*=nums[j];

      }
      for(int k=i+1;k<n;k++){
        
        s2*=nums[k];
      }
      if(s1==s2 ){
        flag=1;
        Min=min(Min,i);
        
      }
    }
    if(flag==1){
      cout<<Min+1<<endl;
    }
    else{
      cout<<-1<<endl;
    }

  }

}
  */
 int main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    vector<long long> nums(n);
    for(long long i=0;i<n;i++){
      cin>>nums[i];
    }
    long long current_2=0;
    long long total_2=0;
    for(long long i=0;i<n;i++){
      if(nums[i]==2){
        total_2++;
      }
    }
    long long ans=-1;
    for(long long i=0;i<n;i++){
      if(nums[i]==2){
        current_2++;
      }
      if(current_2==(total_2-current_2)){
        ans=i+1;
        break;
      }
    }
    cout<<ans<<endl;
    
  }
}