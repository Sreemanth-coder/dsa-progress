#include<bits/stdc++.h>
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

    /*
    bool dec=false;
    for(int i=0;i<n-1;i++){
      if(nums[i])
    }
    */
   /*
   bool skip=false;
   int op=0;

    int i=0;
    while(i<n-1){
      if(nums[i]<nums[i+1]){
        i++;
      }
      else{
        
        if(floor(nums[i]/2)==0){
          skip=true;
          cout<<-1<<endl;
          break;
          
          
        };
        nums[i]=floor(nums[i]/2);
        op++;
        i=0;

      }
    }
    if(skip==true) continue;
    cout<<op<<endl;
    */
   int op=0;
   bool skip=true;
   for(int i=n-2;i>=0;i--){
    while(nums[i]>=nums[i+1]){
      if(nums[i]==0){
        skip=false;
        break;
      }
      nums[i]/=2;
      op++;
    }
    if(!skip) break;
   }
   if(!skip) cout<<-1<<endl;
   else cout<<op<<endl;



  }

}