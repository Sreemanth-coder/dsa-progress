#include<bits/stdc++.h>
using namespace std;

bool m1(vector<int> &a){
  for(int i=0;i<a.size();i++){
    if(a[i]>a[i+1]){
      return false;
    }
  }
  return true;
}

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> a(n);
    for(int i=0;i<n;i++){
      cin>>a[i];
    }
    for(int i=0;i<n;i++){
      cout<<n+1-a[i]<<" ";
    }
    cout<<endl;
    
    }
  
}