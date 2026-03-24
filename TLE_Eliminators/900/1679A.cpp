#include<bits/stdc++.h>
using namespace std;

int  main(){
  int t;
  cin>>t;
  while(t--){
    long long n;
    cin>>n;
    if(n%2!=0 || n<4){
      cout<<-1<<endl;
      continue;
    }
    long long max=1;
    long long min=1;
    
    max=n/4;
    if(n>=6){
      min=(n+5)/6;
    }

    cout<<min<<" "<<max<<endl;


  }
}