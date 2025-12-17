#include<bits/stdc++.h>
using namespace std;

int main(){
  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int l_sb=1;
    int c_sb=1;
    for(int i=0;i<n-1;i++){
      if(s[i]==s[i+1]){
        c_sb++;
      }
      else{
        l_sb=max(l_sb,c_sb);
        c_sb=1;
      }
    }
    l_sb=max(l_sb,c_sb);
    cout<<l_sb+1<<endl;

  }
}