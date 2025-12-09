#include<bits/stdc++.h>
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    int x=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    if(n%2!=0){
      x=a[0];
      for(int i=1;i<n;i++){
        x^=a[i];
      }
      cout<<x<<endl;
    }
    else{
      int A=a[0];
      for(int i=1;i<n;i++){
        A^=a[i];
      }
      if(A==0){
        cout<<1<<endl;
      }
      else{
        cout<<-1<<endl;
      }
    }
  }
}
