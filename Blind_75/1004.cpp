class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int left=0;
        int n=nums.size();
        int max_len=0;
        int zero_count=0;
        for(int right=0;right<n;right++){
            
            if(nums[right]==0){
                zero_count++;
            }
            while(zero_count>k){
                if(nums[left]==0){
                    zero_count--;
                }
                left++;
            }
            max_len=max(max_len,right-left+1);



        }
        return max_len;
        
    }
};