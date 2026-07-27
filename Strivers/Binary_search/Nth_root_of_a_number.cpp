class Solution {
public:
  int NthRoot(int N, int M) {
      int left=1,right=M;
      
      while(left<=right){
        int mid=(left+right)/2;
        int ele=1;
        for(int i=0;i<N;i++){
            ele*=mid;
        }
        if(ele==M){
            return mid;
        }
        else if(ele<M){
            
            left=mid+1;
        }
        else{
            right=mid-1;
        }
      }
      return -1;
    }
};
