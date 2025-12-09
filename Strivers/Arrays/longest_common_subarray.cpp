#include<bits/stdc++.h>
using namespace std;

int Max_subarray(vector<int> nums,long long k){

    /*
    //this is brute force approach and timecomplexity is
    int n=nums.size();
    int max_len=0;
    for(int i=0;i<n;i++){
        int sum=0;
        for(int j=i;j<n;j++){
            sum+=nums[j];

            if(sum==k){
                max_len=max(max_len,(j-i)+1);

            }

        }

    }
    return max_len;
    */
   
   //Better approach
    //** This code snippet is considered to be optimal for negatives and zeores in the input
   //using hashmap

   map<long long,int> mp;
   long long sum=0;
   int max_len=0;
   for(int i=0;i<nums.size();i++){
        sum+=nums[i];
        if(sum==k){
            max_len=max(max_len,i+1);
        }
        int rem=sum-k;
        if(mp.find(rem)!=mp.end()){
            int len=i-mp[rem];
            max_len=max(max_len,len);
        }
        //no duplicates
        if(mp.find(sum)==mp.end()){
            mp[sum]=i;
        }

   }
   return max_len;
   
  /*
    //Now the optimal code using two pointers method
    int max_length=0,sum=nums[0];
    int right=0,left=0;
    int n=nums.size();
    
    while(right<n){
        while(left<=right && sum>k){
            sum-=nums[left];
            left++;
        }
        if(sum==k){
            max_length=max(max_length,right-left+1);
        }
        right++;
        if(right<n){
        sum+=nums[right];
        }

    }
    return max_length;
    */
    




}


int main(){
    vector<int> nums={1, 3, -5, 6, -2};
    long long k=0;
    cout<<Max_subarray(nums,k);
}