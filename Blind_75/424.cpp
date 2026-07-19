class Solution {
public:
    int characterReplacement(string s, int k) {
        int n=s.size();
        int left=0;
        vector<int> nums(26,0);
        int max_length=0;
        int max_freq=0;
        
        for(int right=0;right<n;right++){
            nums[s[right]-'A']++;
            max_freq=max(max_freq,nums[s[right]-'A']);
            int changes=(right-left+1)-max_freq;
            if(changes<=k) max_length=max(max_length,(right-left+1));
            
            while((right-left+1)-max_freq>k){
                nums[s[left]-'A']--;
                left++;
            }

            max_length=max(max_length,(right-left+1));

        }
        return max_length;
       
        
    }
};