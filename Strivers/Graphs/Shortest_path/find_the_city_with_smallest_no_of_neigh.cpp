class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int>> nums(n,vector<int>(n,1e9));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(i==j) nums[i][j]=0;
            }
        }
        for(auto it:edges){
            nums[it[0]][it[1]]=it[2];
            nums[it[1]][it[0]]=it[2];
        }
        for(int via=0;via<n;via++){
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    nums[i][j]=min(nums[i][j],nums[i][via]+nums[via][j]);
                }

            }
        }
        vector<int> final(n,INT_MAX);
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(i!=j && nums[i][j]<=distanceThreshold){
                    cnt++;
                }

            }
            final[i]=cnt;
        }
        int min=INT_MAX;
        int ans=-1;
        for(int i=0;i<n;i++){
            if(final[i]<=min){
                min=final[i];
                ans=i;
            }
        }
        return ans;
    }
};