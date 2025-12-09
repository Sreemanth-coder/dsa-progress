#include<bits/stdc++.h>
using namespace std;

void brute(vector<int> &nums){
    int Max=INT_MIN;
    for(int i=0;i<nums.size();i++){
        int sum=0;
        for(int j=i;j<nums.size();j++){
            sum+=nums[j];
            Max=max(sum,Max);
            

        }
    }
    cout<<Max;

}
//now the optimal approach using kadane's algorithm
void optimal(vector<int> &nums){
    int Max=INT_MIN;
    int sum=0;
    int start=-1,end=-1;
    for(int i=0;i<nums.size();i++){
        if(sum==0){
            start=i;
        }
        sum+=nums[i];
        if(sum>Max){
            Max=sum;
            end=i;
        }
        if(sum<0){
            sum==0;
        }

    }
    cout<<Max<<endl;
    for(int i=start;i<=end;i++){
        cout<<nums[i]<<" ";
    }

}

//Returns the sum of maxsubarray
void max_sum(vector<int> &nums){
    int max_sum=nums[0];
    int curr_sum=nums[0];
    for(int i=1;i<nums.size();i++){
        curr_sum=max(nums[i],curr_sum+nums[i]);
        max_sum=max(max_sum,curr_sum);
    }
    cout<<max_sum;


}


int main(){
    vector<int> nums={2, 3, 5, -2, 7, -4};
    //max_sum(nums);
    //brute(nums);
    optimal(nums);

}