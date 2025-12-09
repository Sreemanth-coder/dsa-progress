#include<bits/stdc++.h>
using namespace std;

string m1(string s){
  stack<string> st;
  for(int i=s.size()-1;i>=0;i--){
    if(s[i]>='a' && s[i]<='z'){
      st.push(string(1,s[i]));
    }
    else{
      string s1=st.top();
      st.pop();
      string s2=st.top();
      st.pop();
      string res="("+s1+s[i]+s2+")";
      st.push(res);

    }
  }
  return st.top();

}

int main(){
  string s="*+pq-mn";
  cout<<m1(s);

}