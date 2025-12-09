#include<bits/stdc++.h>
using namespace std;

void max_depth(string s){
  int count=0;
  int result=INT_MIN;
  for(auto c:s){
    if(c=='('){
      count++;
      result=max(result,count);
    }
    
    else if(c==')'){
      count--;
    }
  

}

int main(){
  string s="(1+(2*3)+((8)/4))+1";
  max_depth(s);
}