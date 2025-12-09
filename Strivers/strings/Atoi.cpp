#include<bits/stdc++.h>
using namespace std;

void atoi(string &s){
  string result="";
  for(auto c:s){
    if(c==NULL){
      continue;
    }
    else if(c=='-'){
      result+=c;
    }
    else if(c=='+'){
      continue;
    }
    else if(c>='1' && c<='9'){
      result+=c;
    }

    

  }

}




int main(){
  string s="";
  atoi(s);
}