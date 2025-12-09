#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(c%2==0){
      a+=c/2;
      b+=c/2;
    }
    else if(c%2!=0){
      a+=(c/2+1);
      if(c/2 >0){
        b+=(c/2 );
      }
      
    }
    if(a>b){
      cout<<"First"<<endl;
    }
    else if(b>=a){
      cout<<"Second"<<endl;
    }
    

   
  }
}