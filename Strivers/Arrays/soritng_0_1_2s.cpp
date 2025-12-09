#include<bits/stdc++.h>
using namespace std;

/*
//brute force approach will be using merge sort which gives O(nlogn)

void m_conquer(vector<int> &nums,int low,int mid,int high){
    vector<int> temp;
    int left=low;
    int right=mid+1;
    while(left<=mid && right<=high){
        if(nums[left]<nums[right]){
            temp.push_back(nums[left]);
            left++;
        }
        else{
            temp.push_back(nums[right]);
            right++;
        }
    }
    while(left<=mid){
        temp.push_back(nums[left]);
        left++;
    }
    while(right<=high){
        temp.push_back(nums[right]);
        right++;
    }
    
    for(int i=0;i<temp.size();i++){
        nums[low+i]=temp[i];
    }

    
}



void m_divide(vector<int> &nums,int low,int high){
    if(low>=high) return;
    int mid=(low+high)/2;
    m_divide(nums,low,mid);
    m_divide(nums,mid+1,high);
    m_conquer(nums,low,mid,high);

}
*/

/*now the better approach is: Since the array the only 0,1 and 2s we will run a loop and find the no.of
    0,1,2s and insert them in an array


*/
/*
 This is better approach since it takes less than O(nlogn) unlike merge sort
void better(vector<int> &nums){
    int n=nums.size();
    int c0=0,c1=0,c2=0;
    for(int i=0;i<n;i++){
        if(nums[i]==0){
            c0++;
        }
        else if(nums[i]==1){
            c1++;
        }
        else{
            c2++;
        }

    }
    for(int i=0;i<c0;i++){
        nums[i]=0;
    }
    for(int i=c0;i<c0+c1;i++){
        nums[i]=1;
    }
    for(int i=c0+c1;i<c0+c1+c2;i++){
        nums[i]=2;
    }
    for(auto it:nums){
        cout<<it<<" ";
    }

}
    */

/* Now  the optimal approach is using Dutch national flag algorithm

*/
void optimal(vector<int> &nums){
    int mid=0,low=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            
            int temp=nums[mid];
            nums[mid]=nums[low];
            nums[low]=temp;
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            //swap with high and then decrement high
            int temp=nums[high];
            nums[high]=nums[mid];
            nums[mid]=temp;
            high--;
            
        }
    }

    for(auto it:nums){
        cout<<it<<" ";
    }
}




int main(){
    vector<int> nums={1,2,0};
    int n=nums.size();
    int low=0,high=n-1;
    //better(nums);
    optimal(nums);
    //m_divide(nums,low,high);
   // for(auto it:nums){
      //  cout<<it<<" ";
    //}

}