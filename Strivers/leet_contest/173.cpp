#include<bits/stdc++.h>
using namespace std;
int main(){
  string s="xyz";
  int k=3;
  string res="";
  for(int i=k-1;i>=0;i--){
    res+=s[i];
  }
  for(int i=k;i<s.size();i++){
    res+=s[i];
  }
  
  for(char c:res){
    cout<<c;
  }
}