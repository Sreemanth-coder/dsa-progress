#include<bits/stdc++.h>
using namespace std;

string l_c_p(vector<string> &names){

  
  string com=names[0];
  string result;
  for(int i=1;i<names.size();i++){
    result="";
    int j=0;
    while(j<com.length() && j<names[i].length()){
      if(com[j]==names[i][j]){
        result+=com[j];
        
      }
      else{
        break;
      }
      j++;
    }
    com=result;
    if(com.empty()) break;
    

  }

  return result;
}

int main(){
  vector<string> names={"sravan","rose","sai koushik"};
  cout<<l_c_p(names);

  

}