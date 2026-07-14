class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        set<char> st;
        int n=s.size();
        int left=0;
        int max_length=0;
        for(int right=0;right<n;right++){
            while(st.count(s[right])){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            
            max_length=max(max_length,right-left+1);
        }
        return max_length;
        
    }
};