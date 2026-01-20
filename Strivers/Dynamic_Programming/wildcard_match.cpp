#include<bits/stdc++.h>
using namespace std;

bool wild(int i,int j,string &s1,string &s2){

  //base cases
  if(i<0 && j<0) return true;
  if(i<0 && j>=0) return false;
  if(j<0){
    for(int i1=0;i1<i;i1++){
      if(s1[i1]!='*') return false;
    }
    return true;
  }



  if(s1[i]==s2[j] || s1[i]=='?'){
    return wild(i-1,j-1,s1,s2);
  }
  if(s1[i]=='*'){
    return wild(i,j-1,s1,s2) || wild(i-1,j,s1,s2);
  }
  return false;

}


int main(){
  string s1,s2;
  cin>>s1>>s2;
  int n=s1.size(),m=s2.size();
  cout<<wild(n-1,m-1,s1,s2);
}