#include<bits/stdc++.h>
using namespace std;
/*
int main(){
  int n=25;
   int x=0;
  int i=1;
    while(n!=0){
        x=x*10+(n%10);
        n=/10;
        
    }
    cout<<abs(n-x);
}
*/

int main(){
  
  string s;
  cin>>s;
  int n;
  cin>>n;
  vector<int> nums(n);
  for(int i=0;i<n;i++){
    cin>>nums[i];  
  }
  map<char,int> mp;
  for(auto c:s){
    mp[c]++;
  }
  int cost=INT_MAX;
  
  for(auto m:mp){
    int sub=0;
   for(int i=0;i<n;i++){
    if(m.first!=s[i]){
     
      sub+=nums[i];

    }
   }
   cost=min(cost,sub);
  }
  cout<<cost;

}