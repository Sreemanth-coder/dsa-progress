#include <bits/stdc++.h>
using namespace std;

/*
int bs(int arr[],int n,int find){
    int low=0,high=n-1;
    int mid;
    while(low<=high){
        mid= low+(high-low)/2;
        if(arr[mid]==find){
            return mid;
        }
        if(arr[mid]<find){
            low=mid-1;
        }
        else{
            high=mid-1;
        }
    }
    return 0;

};
int main(){
    int arr[]={1,2,3,4};
    int find=3;
    int n=4;
    bs(arr,4,3);


}
*/
int main(){
    vector<int> nums={0,0,1,1,2,2,3};
    int n=7;
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }
    for(int i:st){
        cout<<i<<" ";
    }
    cout<<st.size();
}