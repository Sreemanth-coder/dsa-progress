#include<bits/stdc++.h>
using namespace std;

int main(){

  int t;
  cin>>t;

  while(t--){
    
    int n,m;
    cin>>n>>m;
    string x,s;
    cin>>x;
    cin>>s;
    int cnt=0;
    bool g=false;
    
    
    while(x.size()<=60){
      if(x.find(s)!=string::npos){
        cout<<cnt<<endl;
        g=true;
        break;
      }
      x+=x;
      cnt++;
    }
    if(g==false){
      cout<<-1<<endl;
    }
    
  }
  
  
}