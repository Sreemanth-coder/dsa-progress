#include<bits/stdc++.h>
using namespace std;

bool check(string &s1,string &s2){
  if(s1.size()!=s2.size()+1) return false;
  int first=0,second=0;
  while(first<s1.size()){
    if(s1[first]==s2[second]){
      first++;
      second++;
    }
    else{
      first++;
    }
  }
  if(first==s1.size() && second==s2.size()) return true;
  return false;

}
bool comp(string &s1,string &s2){
  return s1.size()<s2.size();
}




int main(){
  int n;
  cin>>n;
  vector<string> s(n);
  for(int i=0;i<n;i++){
    cin>>s[i];
  }
  sort(s.begin(),s.end(),comp);
  vector<int>dp(n,1);
  int maxi=1;
  for(int i=0;i<n;i++){
    for(int j=0;j<i;j++){
      if(check(s[i],s[j]) && dp[j]+1>dp[i]){
        dp[i]=dp[j]+1;
      }
    }
    if(dp[i]>maxi){
        maxi=dp[i];
    }
  }
  cout<<maxi;
  
  
}