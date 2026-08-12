class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int n=cardPoints.size();
        int left=0;
        int right=n-1;
        int sum=0;
        int s1=0;
        int s2=0;
       
        for(int i=0;i<k;i++){
            s1+=cardPoints[i];
        }
        for(int j=n-1;j>=n-k;j--){
            s2+=cardPoints[j];
        }
        sum=s1;
        while(k>0){
            s1-=cardPoints[k-1];
            s1+=cardPoints[right];
            sum=max(sum,s1);
            right--;
            k--;
        }
        sum=max(sum,s2);
        return sum;
        
    }
};