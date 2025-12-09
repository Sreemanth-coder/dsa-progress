#include<bits/stdc++.h>
using namespace std;

void brute(vector<int> &nums,int n){
    int Max=0;
    for(int i=0;i<n;i++){
        int num=nums[i];
        for(int j=i;j<n;j++){
            
            Max=max(Max,num*nums[j]);
        }
    }
    cout<<Max;
}
void m1(vector<int> &nums,int n){
    map<int,int> mp;
    int Max=0;
  
    for(int i=1;i<n;i++){
        mp[0]=nums[0];
        int n=mp[0];
        for(int j=1;j<=i;j++){
            n=n*nums[j];
        }
        mp[i]=n;
    }
    for(auto it:mp){
        cout<<it.first<<" "<<it.second<<endl;
    }
    for(auto it:mp){
        Max=max(Max,it.second);
    }
    cout<<Max;
}

void optimal(vector<int> &nums,int n){
    //using suffix and prefix
    int prefix=1,suffix=1;
    int ans=INT_MIN;
    for(int i=0;i<n;i++){
        if(prefix==0) prefix=1;
        if(suffix==0) suffix=1;
        prefix=prefix*nums[i];
        suffix=suffix*nums[n-i-1];
        ans=max(ans,max(suffix,prefix));
    }
    cout<<ans;
}

int main(){
    vector<int> nums={2,3,-2,4};
    int n=nums.size();
    //m1(nums,n);
    //brute(nums,n);
    optimal(nums,n);
}