#include<bits/stdc++.h>
using namespace std;

string m1(string s){

  stack<string> st;
  for(int i=0;i<s.size();i++){
    if(s[i]>='a' && s[i]<='z'){
      st.push(string(1,s[i]));
    }

    else{
      string s2=st.top();
      st.pop();
      string s1=st.top();
      st.pop();
      string res=s[i]+s1+s2;
      st.push(res);
    }
  }
  return st.top();
}

int main(){
  string s="ab-de+f*/";
  cout<<m1(s);
}