#include<bits/stdc++.h>
using namespace std;

vector<int> m1(int n){
  vector<int> final;
  int cofact=1;
  while(n!=0){
    int val=n%10;
    if(val>0){
    final.push_back(val*cofact);
    }
    cofact*=10;
    n=n/10;

  }
  reverse(final.begin(),final.end());
  for(int i:final){
    cout<<i<<" ";
  }

}

int main(){
  int n=537;
  m1(n);
}