#include<bits/stdc++.h>
using namespace std;

/*
1)Reverse the input string
2)Then perform infix to postfix to that string
3)Then reverse the final answer
*/

int priority(char c){
  if (c=='^') return 3;
  else if(c=='*' || c=='/') return 2;
  else if(c=='+' || c=='-') return 1;
  else return -1;
    
}
string infixToPrefix(string s) {
  stack<char> st;
    
  reverse(s.begin(),s.end());
  for (int i = 0; i < s.size(); i++) {
    if (s[i] == '(') s[i] = ')';
    else if (s[i] == ')') s[i] = '(';
    }
  string final="";

  for(int i=0;i<s.size();i++){
    if(s[i]>='a' && s[i]<='z'){
      final+=s[i];
    }

    else if(s[i]=='('){
      st.push(s[i]);
    }
    else if(s[i]==')'){
      while(st.top()!='('){
        final+=st.top();
        st.pop();
      }
      st.pop();
    }
    else{
      if(s[i]=='^'){
        while(!st.empty() && priority(s[i])<=priority(st.top())){
          final+=st.top();
          st.pop();
        }
      }
      else{
        while(!st.empty() && priority(s[i])<priority(st.top())){
          final+=st.top();
          st.pop();
        }

      }
      st.push(s[i]);
    }
  }
  while(!st.empty()){
    final+=st.top();
    st.pop();
  }
  reverse(final.begin(),final.end());
  return final ;

}


int main(){
  string s=  "((a-(b/c))*((a/k)-l))";
  cout<<infixToPrefix(s);
 
}