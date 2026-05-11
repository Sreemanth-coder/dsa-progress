#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int a,b,c;
    cin>>a>>b>>c;
    int d1=b-a;
    int d2=c-a;
    if(d1==d2){
      cout<<"Yes"<<endl;
    }
    else if(d1==0 && c>a){
      cout<<"No"<<endl;
    }
    else if(d2==0 && a>b){
      cout<<"No"<<endl;
    }
    else if(d1!=0 && d2!=0){
      int c
    }


  }
}