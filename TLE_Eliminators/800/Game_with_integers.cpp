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

    map<int,int> mp;
    for(int i=0;i<n;i++){
      mp[nums[i]]++;
    }

    if(mp.size()>=3){
      cout<<"No"<<endl;
    }
    else{
      int f1=mp.begin()->second;
      int f2=mp.rbegin()->second;

      if(f1==f2) cout<<"Yes"<<endl;
      else if(n%2==1 && abs(f1-f2)==1) cout<<"Yes"<<endl;
      else cout<<"No"<<endl;
    }


    
}


}