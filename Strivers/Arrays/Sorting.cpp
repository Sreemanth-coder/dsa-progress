#include<bits/stdc++.h>
using namespace std;

void selection_sort(vector<int> nums){
    int n=nums.size();
    for(int i=0;i<n-1;i++){
        int min=i;
        for(int j=i;j<n;j++){
            if(nums[j]<nums[i]){
                min=j;
                //swap
                int temp=nums[min];
                nums[min]=nums[i];
                nums[i]=temp;
            }
        }

    }
    for(auto it:nums){
        cout<<it<<" ";
    }

}

void bubble_sort(vector<int> nums){

}

int main(){
    vector<int> num={5,6,2,1};
    //selection_sort(num);
    
}