#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    int ops=0;
    if(d<b){
      cout<<-1<<endl;
      continue;
    }
    ops+=(d-b);
    a+=ops;
    if(a<c){
      cout<<-1<<endl;
      continue;
    }
    ops+=(a-c);
    cout<<ops<<endl;
  }
  
}