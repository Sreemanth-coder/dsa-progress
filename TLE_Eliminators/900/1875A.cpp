#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){

    long long a,b,n;
    cin>>a>>b>>n;
    vector<long long > nums(n);
    for(long long i=0;i<n;i++){
      cin>>nums[i];
    }
    long long seconds=0;
    
   for(int i=0;i<n;i++){
    if(b!=1){
      seconds+=b-1;
      b=1;
    }
    b=min(b+nums[i],a);

   }

    cout<<seconds+b<<endl;
  }
}