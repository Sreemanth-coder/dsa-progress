#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> g={1,2,3};
  vector<int> s={1,1};
  int i=0;
  int j=0;
  int cnt=0;
  while(i<g.size() && j<s.size()){
    if(s[i]>=g[j]){
      cnt++;
      i++;
      j++;
    }
    else{
    i++;
    }
  }
  cout<<cnt;
}