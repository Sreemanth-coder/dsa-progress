#include<bits/stdc++.h>
using namespace std;


void Missing_number(vector<int> nums){
    int n=nums.size();
    /*
    int actual_sum=n*(n+1)/2;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=nums[i];
    }
    cout<<actual_sum-sum;
    */

    //Now using XOR technique
    int xor1=0,xor2=0;
    for(int i=0;i<=n;i++){
        xor1=xor1^i;
    }
    for(int i=0;i<n;i++){
        xor2=xor2^nums[i];
    }
    int result=xor1 ^ xor2;
    cout<<result;


}

int main(){
    vector<int> nums={3,0,4,1};
    Missing_number(nums);

}