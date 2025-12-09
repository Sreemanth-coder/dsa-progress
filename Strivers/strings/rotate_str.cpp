#include<bits/stdc++.h>
using namespace std;

int main(){
  string st="sree";
  int i=1;
  if(st.size()>0){
    char temp=st[0];
    for(i=0;i<st.size();i++){
      st[i]=st[i+1];
    }
    st[st.size()-1]=temp;
  }
  cout<<st;
}