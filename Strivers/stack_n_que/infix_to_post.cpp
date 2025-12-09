#include<bits/stdc++.h>
using namespace std;

int priority(char c){
  if(c=='^') return 3;
  else if(c=='*' || c=='/') return 2;
  else if(c=='+' || c=='-') return 1;
  else return -1;
}

void m1(string s){
  stack<char> st;
  
  string final="";
  int i=0;
  while(i<s.size()){
    if((s[i]>='A' && s[i]<='Z') || (s[i]>='a' && s[i]<='z') || (s[i]>='0' && s[i]<='9')){
      final+=s[i];
    }
    else if(s[i]=='('){
      st.push(s[i]);
    }

    else if(s[i]==')'){
      while(!st.empty() && st.top()!='('){
        final+=st.top();
        st.pop();

      }
      st.pop();
    }

    else{
      while(!st.empty() && priority(s[i])<=priority(st.top())){
        final+=st.top();
        st.pop();
      }
      st.push(s[i]);

    }
    i++;
  }
  while(!st.empty()){
    final+=st.top();
    st.pop();
  }

  for(char c:final){
    cout<<c;
  }
}


int main(){
  string s= "a+b*c^d-e^f*g+h";
  m1(s);
}