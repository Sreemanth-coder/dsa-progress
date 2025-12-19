#include<bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin>>n;
  vector<int> dp(n+1);
  int prev=1,prev1=0;
  for(int i=2;i<=n+1;i++){
    int curr=prev+prev1;
    prev1=prev;
    prev=curr;
  }
  cout<<prev;

}