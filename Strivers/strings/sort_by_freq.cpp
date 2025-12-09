#include<bits/stdc++.h>
using namespace std;

//This code only if the string only lowercases
bool co(pair<char,int>&p1,pair<char,int> &p2){
  if(p1.second!=p2.second){
    return p1.second>p2.second;
  }
  return p1.first<p2.first;
}

void m1(string &s){
  map<char,int> mp;
  for(auto c:s){
    mp[c]++;
  }
  vector<pair<char,int>> v(mp.begin(),mp.end());

  sort(v.begin(),v.end(),co);
  /*
  for(auto n:v){
    cout<<n.first<<" "<<n.second<<endl;
  }
    */
   for(auto n:v){
    int i=0;
    while(i!=n.second){
      cout<<n.first;
      i++;
    }
   }

}

int main(){
  string s="aAbb";
  m1(s);

}