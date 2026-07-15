class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxi=INT_MIN;
        int i=0,j=n-1;
        while(i<j){
            maxi=max(maxi,min(height[i],height[j])*(j-i));
            if(height[i]<height[j]){
                i++;
            }
            else if(height[i]>=height[j]){
                j--;
            }
        }
        return maxi;
    }
};