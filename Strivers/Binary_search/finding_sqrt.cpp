class Solution {
public:
    int floorSqrt(int n)  {
        if(n==0) return 0;
        int target=n;
        int left=0,right=n;
        int nos=0;
        while(left<=right){
            int mid=(left+right)/2;
           
            if(mid*mid== target){
                return mid;
            }
            else if(mid*mid <target){
                nos=mid;
                left=mid+1;
            }
            else{
                right=mid-1;
            }
        }
        return nos;
      
    }
};