class Solution {
    int atmost(vector<int>&nums,int g){
        if(g<0) return 0;
        int left=0;
        int n=nums.size();
        int sum=0;
        int cnt=0;
        for(int right=0;right<n;right++){
            sum+=nums[right];
            while(sum>g){
                sum-=nums[left];
                left++;
            }
            cnt+=(right-left+1);

        }
        return cnt;
    }
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        
        return atmost(nums,goal)-atmost(nums,goal-1);
        
        
    }
};