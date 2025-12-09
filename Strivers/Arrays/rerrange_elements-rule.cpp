#include<bits/stdc++.h>
using namespace std;

vector<int> rearrange(vector<int> &nums){
    int n=nums.size();
    vector<int> arr1;
    vector<int> arr2;
    vector<int> final;
    for(int i=0;i<n;i++){
        if(nums[i]>=0){
            arr1.push_back(nums[i]);
        }
        else if(nums[i]<0){
            arr2.push_back(nums[i]);
        }
    }
    for(int i=0;i<n/2;i++){
        final.push_back(arr1[i]);
        final.push_back(arr2[i]);

    }
    return final;
    



}

void another_method(vector<int> &nums){
    if(nums[0]<0){
            int swap;
            for(int j=1;j<nums.size();j++){
                if(nums[j]>0){
                    swap=j;
                    break;
                }
            }
            //swap
            int temp=nums[0];
            nums[0]=nums[swap];
            nums[swap]=temp;
        }
    for(int i=0;i<nums.size();i++){
        
        if(nums[i]<0){
            if(nums[i+1]>0){
                break;
            }
            else{
                int swap;
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]>0){
                        swap=j;
                        break;

                    }
                }

                //swap
                int temp=nums[i+1];
                nums[i+1]=nums[swap];
                nums[swap]=temp;
            }
        }
        else if(nums[i]>0){
            if(nums[i+1]<0){
                break;
            }
            else{
                int swap;
                for(int j=i+1;j<nums.size();j++){
                    if(nums[j]<0){
                        swap=j;
                        break;
                    }
                }
                //swap
                int temp=nums[i+1];
                nums[i+1]=nums[swap];
                nums[swap]=temp;
            }
        }
    }

    for(auto it:nums){
        cout<<it<<" ";
    }

}
void better(vector<int> &nums){
    int n=nums.size();
    int arr[n];
    int left=0,right=0;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            arr[2*right]=nums[i];
            right++;

        }
        else{
            arr[2*left+1]=nums[i];
            left++;

        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}




int main(){
    vector<int> nums={3,1,-2,-5,2,-4};
   /*vector<int> out=rearrange(nums);
    for(int it:out){
        cout<<it<<" ";
    }
        */
    //another_method(nums);
    better(nums);
}