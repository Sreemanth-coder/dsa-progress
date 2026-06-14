#include<bits/stdc++.h>
using namespace std;

int main(){
  int n=22;
  int sum=0;
  int sq=0;
  while(n>0){
    int digit=n%10;
    sum+=digit;
    sq+=(digit*digit);
    n=n/10;
  }
  cout<<sum<<" "<<sq;
}