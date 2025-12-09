#include<bits/stdc++.h>
using namespace std;

void leader(vector<int> nums){
    int n=nums.size();
    vector<int> out(n,0);
    int index=0;
    for(int i=0;i<n;i++){
        int cnt=0;
        for(int j=i+1;j<n;j++){
            if(nums[i]>nums[j]){
                cnt++;
            }
            else{
                break;
            }
        }
        if(cnt==n-i-1){
            out[index]=nums[i];
            index++;
        }
    }
    int i=0;
    while(out[i]!=0){
        cout<<out[i]<<" ";
        i++;
    }
    

    
}

void better(vector<int> &nums){
    int n=nums.size();
    int index=0;
    int left=0,right=0;
    while(left<n){
        int cnt=0;
        for(int j=left+1;j<n;j++){
            if(nums[left]>nums[j]){
                cnt++;
            }
            else{
                break;
            }
        }
        if(cnt==n-left-1){
            nums[index]=nums[left];
            index++;
        }
        left++;
        
        
    }
    for(int i=0;i<index;i++){
        cout<<nums[i]<<" ";
    }

}

void optimal(vector<int> &nums){
    vector<int> ans;
    int n=nums.size();
    int max=INT_MIN;
    for(int i=n-1;i>=0;i--){
        if(nums[i]>max){
            max=nums[i];
            ans.push_back(nums[i]);
        }


    }
    int n1=ans.size();
    for(int i=n1-1;i>=0;i--){
        cout<<ans[i]<<" ";
    }


}

int main(){
    vector<int> nums={-3, 4, 5, 1, -4, -5};
    //leader(nums);
    //better(nums);
    optimal(nums);
}