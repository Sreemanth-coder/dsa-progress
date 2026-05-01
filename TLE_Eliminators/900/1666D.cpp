#include<bits/stdc++.h>
using namespace std;


int main(){
  int t;
  cin>>t;
  while(t--){
    string s;
    cin>>s;
    string tar;
    cin>>tar;
    int n=s.size();
    int m=tar.size();
    string final;
    vector<int> freq(26,0);
    for(int i=0;i<m;i++){
      freq[tar[i]-'A']++;
    }
    for(int i=n-1;i>=0;i--){
      if(freq[s[i]-'A']>0){
        freq[s[i]-'A']--;
      }
      else{
        s[i]='.';
      }
    }
    for(int i=0;i<n;i++){
      if(s[i]!='.'){
        final+=s[i];
      }

    }
    if(final==tar){
      cout<<"YES"<<endl;
    }
    else{
      cout<<"NO"<<endl;
    }

    

  }
}

  