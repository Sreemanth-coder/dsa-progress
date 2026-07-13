/*
class Solution {
public:
    bool isPalindrome(string s) {
        string result="";
        
        for(char c:s){
            if(isalnum(c)){
                result+=tolower(c);
            }
        }
        string final=result;
        reverse(final.begin(),final.end());
        return result==final;
        
    }
};
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    string s="A man, a plan, a canal: Panama";
    string result="";
        
      for(char c:s){
        if(c>='A' && c<='Z'){
            result+=tolower(c);
        }
        else if(c>='a' && c<='z'){
            result+=c;
        }
      }
      int i=0,j=result.size()-1;
      while(i<=j){
        if(result[i]==result[j]){
            i++;
            j--;
        }
        else{
            cout<< false;
        }

      }
      cout<< true;
      for(char c:result){
        cout<<c<<" ";
      }
        
}
