#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  int n=s.size();
  int j=n-1;
  int i=0;
  int op=0;
  while(i<=j){
    if(s[i]==s[j]){
      i++;
      j--;
    }
    else{
      i++;
      op++;
    }
  }
  cout<<op;
}