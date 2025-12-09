#include<iostream>
#include<vector>
#include <bits/stdc++.h>
using namespace std;
/*
//To find second largest and second smallest
int secondLargest(vector<int> nums){
    int max=nums[0];
    int smax=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]>max){
            smax=max;
            max=nums[i];
        }
        else if(nums[i]<max && smax<nums[i]){
            smax=nums[i];
        }
    }
    return smax;
}
int secondSmallest(vector<int> nums){
    int min=nums[0];
    int smin=-1;
    for(int i=0;i<nums.size();i++){
        if(nums[i]<min){
            smin=min;
            min=nums[i];
        }
        else if(nums[i]>min && nums[i]<smin){
            smin=nums[i];
        }
    }
    return smin;

}

vector<int> result(vector<int> nums){
    int slargest=secondLargest(nums);
    int ssmallest=secondSmallest(nums);

    return {slargest,ssmallest};
}


int main(){
    vector<int> nums={5,2,345,523,23};
    vector<int> final=result(nums);
    for(auto it=final.begin();it!=final.end();it++){
        cout<<*(it)<<" ";
    }
}
*/


//To remove duplicates

/*
1)This is not a optimal code beacuse it gives O(nlogn)
vector<int> duplicates(vector<int> nums){
    set<int> st;
    for(int i=0;i<nums.size();i++){
        st.insert(nums[i]);
    }
    for(auto it=st.begin();it!=st.end();it++){
        cout<<*(it)<<" ";
    }
    cout<<endl;
    int index=0;
    for(auto it:st){
        nums[index]=it;
        index++;
    }
    

    cout<<index<<endl;
    for(auto it=nums.begin();it!=nums.end();it++){
        cout<<*(it)<<" ";
    }


}
*/
/*
2)This is a optimal method to remove duplicates in an array (O(N))
void duplicate(vector<int> nums){
    int i=0;
    for(int j=1;j<nums.size();j++){
        if(nums[j]!=nums[i]){
            nums[i+1]=nums[j];
            i++;
        }
    }
    cout<<(i+1)<<endl;
    for(int it:nums){
        cout<<it<<" ";
    }
}

*/
/*
//Rotate array

void Rotate_array(vector<int> nums,int k){
    int n=nums.size();
    int j=0;
    
/* 
//left rotate
    while(j<k){
        int temp=nums[0];
        for(int i=1;i<n;i++){
            nums[i-1]=nums[i];
        }
        nums[n-1]=temp;
        j++;
    }

*/
//right rotate
/*1) This is code doesnt work if size of nums is 10^5
  ->Important:This code have space complexity of O(n-1){due to temp array};
  ->Our main aim will be optimal the time complexity and then decrease or nullify the space complexity

  
    int temp=nums[n-1];
    for(int i=n-2;i>=0;i--){
        nums[i+1]=nums[i];
    }
    nums[0]=temp;

    for(int it:nums){
        cout<<it<<" ";
    }

}

*/
/*
//So, we use reverse method
    reverse(nums.begin(),nums.begin()+k);
    reverse(nums.begin()+k,nums.end());
    reverse(nums.begin(),nums.end());
    for(int it:nums){
        cout<<it<<" ";
    }

}
*/

/*
//Move zeroes
//Two pointer approach
void move_zeroes(vector<int> nums){
    int i=0,j=0;
    for(i=0;i<nums.size();i++){
        if(nums[i]!=0){
            nums[j]=nums[i];
            j++;
        }
    }
    for(i=j;i<nums.size();i++){
        nums[i]=0;
    }
    for(int it:nums){
        cout<<it<<" ";
    }
}
    */


//linear search
/*
int linear_search(vector<int> nums,int target){
    
    for(int i=0;i<nums.size();i++){
        if(nums[i]==target){
            return i;
        }
    }
    return -1;
}
*/

/*
//union
void Union(vector<int> nums1,vector<int> nums2){
    int i=0,j=0;
    vector<int> unionArr;
    int n1=nums1.size();
    int n2=nums2.size();
    while(i<n1 && j<n2){
        if(nums1[i]<nums2[j]){
            if(unionArr.size()==0 || unionArr.back()!=nums1[i]){
                unionArr.push_back(nums1[i]);
            
            }
            i++;
        }
        else{
            if(unionArr.size()==0 || unionArr.back()!=nums2[j]){
                unionArr.push_back(nums2[j]);
                
            }
            j++;
            
        }
    }
    while(i<n1){
        if(unionArr.size()==0 || unionArr.back()!=nums1[i]){
            unionArr.push_back(nums1[i]);
        
        }
        i++;
    }
    while(j<n2){
        if(unionArr.size()==0 || unionArr.back()!=nums2[j]){
            unionArr.push_back(nums2[j]);
            
        }
        j++;
    }

    for(int it:unionArr){
        cout<<it<<" ";
    }
}
*/
int Single_number(vector<int> nums){
    //hashing doesnt work if the array contain negative numbers
    /*
    //Better soln but not optimal can be obtained by using map ds
    map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]+=1;
    }
    for(auto it:mp){
        if(it.second==1){
            return it.first;

        }
    }
    return 0;
    */

}





int main(){
    vector<int> nums={-1,1,1,2,2,3,3,4,4};
    vector<int> nums1={1,2,2,2,2,3,4,5};
    vector<int> nums2={2,3,4,5,6,7};
    int target=5;
    int k=3;
  
    //Rotate_array(nums,k);;
    //duplicates(nums);
    //duplicate(nums);
    //move_zeroez(nums);
    //cout<<linear_search(nums,target);
    //Union(nums1,nums2);
    cout<<Single_number(nums);

}