#include<bits/stdc++.h>
using namespace std;

int main(){
  vector<int> nums={2,3,5};
   long long ans=0;
        int n=nums.size();
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                int g=gcd(nums[i],nums[j]);
                long long c=(nums[i]*nums[j])/(g*g);
                ans=max(ans,c);
            }
        }
        cout<<ans;

}