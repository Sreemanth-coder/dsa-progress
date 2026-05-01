#include<bits/stdc++.h>
using namespace std;

int main(){
  string beginWord="hit";
  string endWord="cog";
  vector<string> wordList={"hot","dot","dog","lot","log","cog"};
  int n=wordList.size();
  queue<pair<string,int>> q;
  q.push({beginWord,1});
  set<string> st(wordList.begin(),wordList.end());
  map<string,int> mp;
  mp[beginWord]=1;

  while(!q.empty()){
    string word=q.front().first;
    int steps=q.front().second;
    q.pop();
    if(word==endWord) {
      cout<<steps;
      return 0;
    }
    
    for(int i=0;i<word.size();i++){
      char original=word[i];
      for(char c='a';c<='z';c++){
        word[i]=c;
        if(st.find(word)!=st.end()){
          st.erase(word);
          q.push({word,steps+1});
          
        }
      }
      word[i]=original;
    }
  }
  return 0;
}