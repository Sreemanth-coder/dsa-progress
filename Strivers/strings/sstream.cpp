#include<bits/stdc++.h>
using namespace std;

int main(){
  /*
  //String to integer
  string s="123";
  stringstream ss(s);
  int x;
  ss>>x;
  cout<<x;
*/
  //Integer to string
  int x=456;
  stringstream ss;
  ss<<x;
  string s=ss.str();
  for(char c:s){
    cout<<c;
    
  }

  }