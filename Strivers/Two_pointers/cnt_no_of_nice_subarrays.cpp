class Solution {
    int atmost(vector<int>&nums,int g){
        if(g<0) return 0;
        int sum=0;
        int cnt=0;
        int left=0;
        for(int right=0;right<nums.size();right++){
            sum+=nums[right];
            while(sum>g){
                sum-=nums[left];
                left++;
            }
            cnt+=right-left+1;
        }
        return cnt;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]%2==0) nums[i]=0;
            else nums[i]=1;
        }
        return atmost(nums,k)-atmost(nums,k-1);

        
    }
};