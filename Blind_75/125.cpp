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