#include<bits/stdc++.h>
using namespace std;

int  main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    if(n%2!=0){
      cout<<-1<<endl;
      continue;
    }
    long long max=0;
    long long min=0;
    if(n>=4){
      max=n/4;

    }
    if(n>=6){
      min=n/6;
    }
    
    cout<<min<<" "<<max<<endl;


  }
}