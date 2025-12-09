#include<bits/stdc++.h>
using namespace std;

void m1(vector<int> &nums,int k){
    int left=0,right=1;
    int n=nums.size();
    int sum=nums[0];
    int final=0;
    while(right<n){
        
        if(sum==k){
            final++;
            right++;
        }
        else if(sum>k){
            sum-=nums[left];
            left++;
        }
        else{
            right++;
        }
        sum+=nums[right];

    }
    cout<<final;


}
void brute(vector<int> &nums,int k){
    int n=nums.size();
    int final=0;
   map<int,int> mp;
    
   
    cout<<final;

}

int main(){
    vector<int> nums={1,1,1};
    int k=2;
    //m1(nums,k);
    brute(nums,k);

}