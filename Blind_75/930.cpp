class Solution {
public:
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        int total=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum==goal){
                    total++;
                }
                else if(sum>goal){
                    break;
                }

            }
        }
        return total;
        
    }
};