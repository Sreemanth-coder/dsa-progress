#include<bits/stdc++.h>
using namespace std;


int dis(int i,int j,string s,string t){
  if(i<0) return 0;
  if(j<0) return 1;

  if(s[i]==t[j]){
    return dis(i-1,j-1,s,t)+dis(i-1,j,s,t);
  }
  else{
    return dis(i-1,j,s,t);
  }

}


int main(){
  string s,t;
  cin>>s>>t;
  int ind1=s.size()-1,ind2=t.size()-1;
  cout<<dis(ind1,ind2,s,t);

}