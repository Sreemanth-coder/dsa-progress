#include<bits/stdc++.h>
using namespace std;


void m1(vector<int> &nums,int n,int target){
    sort(nums.begin(),nums.end());
    vector<vector<int>> final;
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]) continue;
        for(int j=i+1;j<n;j++){
            if(j>0 && nums[j]==nums[j-1]) continue;
            int k=j+1,l=n-1;
            
            while(k<l){
                int sum=nums[i]+nums[j]+nums[k]+nums[l];
                if(sum==target){
                    vector<int> temp={nums[i],nums[j],nums[k],nums[l]};
                    final.push_back(temp);
                    j++;
                    l--;
                    while(k<l && nums[k]==nums[k-1]) k++;
                    while(k<l &&  nums[l]==nums[l+1]) l--;

                }
                else if(sum<target){
                    j++;
                }
                else{
                    l--;
                }
                
            }

        }
    }
    
    

}


int main(){
    vector<int> nums={1,0,-1,0,-2,2};
    int n=nums.size();
    int target=0;
    m1(nums,n,target);

}