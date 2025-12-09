#include<bits/stdc++.h>
using namespace std;


void m1(vector<int> &nums1,int m,vector<int> &nums2,int n){

    int left=0,right=0;
    while(left<m && right<n){
        if(nums1[left]<=nums2[right]){
            cout<<nums1[left]<<" ";
            left++;
        }
        else{
            cout<<nums2[right]<<" ";
            right++;
        }
    }
    
    while(left<m){
        cout<<nums1[left]<<" ";
        left++;
    }
    while(right<n){
        cout<<nums2[right]<<" ";
        right++;
    }
        
}
void m2(vector<int> &nums1,int m,vector<int> &nums2,int n){
    int i=m-1,j=n-1,k=m+n-1;

    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            k--;
            i--;
        }
        else{
            nums1[k]=nums2[j];
            k--;
            j--;
        }
    }
    while(j>=0){
        nums1[k]=nums2[j];
        k--;
        j--;
    }
    for(auto it:nums1){
        cout<<it<<" ";
    }

}
void swap(vector<int> &nums1,vector<int> &nums2,int index1,int index2){
    if(nums1[index1]>nums2[index2]){
        swap(nums1[index1],nums2[index2]);
    }
}
void optimal(vector<int> &nums1,int m,vector<int> &nums2,int n){
    int len=m+n;
    int gap=(len/2)+(len%2);
    while(gap>0){
        int left=0;
        int right=left+gap;
        while(right<len){
            if(left<m && right>=m){
                swap(nums1,nums2,left,right-m);

            }
            else if(left>=m){
                swap(nums1,nums2,left-m,right-m);

            }
            else{
                swap(nums1,nums2,left,right);

            }
            left++;
            right++;

        }
        if(gap==1) break;
        gap=(gap/2) + (gap%2);
    }
    for(auto it:nums1){
        cout<<it<<" ";
    }
}


void two_pointer(vector<int> &nums1,int m,vector<int> &nums2,int n){
    int i=m-1,j=n-1,k=m+n-1;
    while(i>=0 && j>=0){
        if(nums1[i]>nums2[j]){
            nums1[k]=nums1[i];
            k--;
            i--;
        }
        else{
            nums1[k]=nums2[j];
            k--;
            j--;
        }
    }
    while(j>=0){
        nums1[k]=nums2[j];
        k--;
        j--;
    }
    for(auto it:nums1){
        cout<<it<<" ";
    }


}









void swapIfGreater(vector<int> &arr1,vector<int> &arr2, int ind1, int ind2) {
    if (arr1[ind1] > arr2[ind2]) {
        swap(arr1[ind1], arr2[ind2]);
    }
}

void merge(vector<int> &arr1,vector<int> &arr2, int m, int n) {
    // len of the imaginary single array:
    int len = n + m;

    // Initial gap:
    int gap = (len / 2) + (len % 2);

    while (gap > 0) {
        // Place 2 pointers:
        int left = 0;
        int right = left + gap;
        while (right < len) {
            // case 1: left in arr1[]
            //and right in arr2[]:
            if (left < n && right >= n) {
                swapIfGreater(arr1, arr2, left, right - n);
            }
            // case 2: both pointers in arr2[]:
            else if (left >= n) {
                swapIfGreater(arr2, arr2, left - n, right - n);
            }
            // case 3: both pointers in arr1[]:
            else {
                swapIfGreater(arr1, arr1, left, right);
            }
            left++, right++;
        }
        // break if iteration gap=1 is completed:
        if (gap == 1) break;

        // Otherwise, calculate new gap:
        gap = (gap / 2) + (gap % 2);
    }
    for(int i=0;i<n;i++){
        arr1[m+i]=arr2[i];
    }
    for(auto it:arr1){
        cout<<it<<" ";
    }

}


int main(){
    vector<int> arr1={1,2,3,0,0,0};
    int m=  3;
    vector<int> arr2={2,5,6};
    int n=3 ;
    //m1(arr1,m,arr2,n);
    //m2(arr1,m,arr2,n);
    //optimal(arr1,m,arr2,n);
    //merge(arr1,arr2,m,n);
    two_pointer(arr1,m,arr2,n);
}