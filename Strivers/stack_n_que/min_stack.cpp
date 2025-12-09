#include<bits/stdc++.h>
using namespace std;

int main(){
  set<int> st;
  st.insert(-1);
  st.insert(2);
  st.insert(0);
  st.erase(0);
  for(int i:st){
    cout<<i<<" ";
    }
  
  
}