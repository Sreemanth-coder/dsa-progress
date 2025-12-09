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
    int out=s.size();
    int left=0;
    int right=s.size()-1;
    while(left<=right){
      if(s[left]!=s[right]){
        out-=2;
        left++;
        right--;
      }

      else{
        break;
      }
    }
    cout<<out<<endl;
  }S
}