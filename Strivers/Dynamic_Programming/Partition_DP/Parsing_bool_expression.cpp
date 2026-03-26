#include<bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin>>s;
  stack<char> st;
  vector<char> operands;
  bool out;
  for(char c:s){
    if(c=='(' || c==','){
      continue;
    }
    else if(c!=')'){
      st.push(c);
    }
    else{
      int t=0,f=0;
      while(!st.empty() && st.top()!='&' && st.top()!='|' && st.top()!='!'){
        if(st.top()=='t') {
          t++;
          st.pop();
        }
        else if(st.top()=='f'){
          f++;
          st.pop();
        }
      }
      char op=st.top();
      st.pop();
      if(op=='!'){
        st.push(f==1 ? 't':'f');
      }
      else if(op=='&'){
        st.push(f>0 ? 'f':'t');
      }
      else if(op=='|'){
        st.push(t>0 ? 't':'f');
      }

    }
  }
  return st.top=='t';

}

