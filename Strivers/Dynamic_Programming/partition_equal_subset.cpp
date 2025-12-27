#include<bits/stdc+.h>
using namespace std;



int main(){
 int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2!=0) return false;
        int k=sum/2;

        vector<bool> prev(k+1,0),curr(k+1,0);
        prev[0]=true;
        if(nums[0]<=k){
            prev[nums[0]]=true;
        }
        
        for(int i=1;i<n;i++){
            for(int j=1;j<k+1;j++){
                bool not_take=prev[j];
                bool take=false;
                if(nums[i]<=j){
                    take=prev[j-nums[i]];
                }
                curr[j]=take || not_take;

            }
            prev=curr;

        }
        return prev[k];


}