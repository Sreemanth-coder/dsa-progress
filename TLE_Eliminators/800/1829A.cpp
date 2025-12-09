#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    int Max=0;
    int cnt=0;
    for(int i=0;i<n;i++){
      int x;
      
      cin>>x;

      if(x==0){
        cnt++;
        Max=max(Max,cnt);
      }
      else{
        
        cnt=0;
      }
    }
    cout<<Max<<endl;
  }
}