#include<bits/stdc++.h>
using namespace std;

vector<vector<int>> brute(vector<int> &nums,int n){
    //Time complexity is O(N^3) and space complexity is O(1)
    set<vector<int>> st;
    for(int i=0;i<n-2;i++){
        for(int j=i+1;j<n-1;j++){
            for(int k=j+1;k<n;k++){
                if(nums[i]+nums[j]+nums[k]==0){
                    vector<int> temp={nums[i],nums[j],nums[k]};
                    sort(temp.begin(),temp.end());
                    st.insert(temp);
                }
            }
        }
    }
    vector<vector<int>> ans(st.begin(),st.end());
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }

}

void better(vector<int> &nums,int n){
    vector<vector<int>> final;
    set<int> st;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            int k=-(nums[i]+nums[j]);
            if(st.find(k)!=st.end()){
                cout<<nums[i]<<" "<<nums[j]<<" "<<k<<endl;
            }
            else{
                st.insert(nums[j]);
            }
        }
    }

}

//Two pointer approach
void optimal(vector<int> nums,int n){
    sort(nums.begin(),nums.end());
    for(int i=0;i<n;i++){
        if(i>0 && nums[i]==nums[i-1]){
            continue;
        }
        int j=i+1,k=n-1;
        while(j<k){
            if(nums[i]+nums[j]+nums[k]==0){
                cout<<nums[i]<<" "<<nums[j]<<" "<<nums[k]<<endl;
                j++;
                k--;
                while(j<k && nums[j]==nums[j-1]) j++;
                while(j<k && nums[k]==nums[k+1]) k--;
            }
            else if(nums[i]+nums[j]+nums[k]<0){
                j++;
            }
            else{
                k--;
            }
        }
    }
}


int main(){
    vector<int> nums={-1,0,1,2,-1,-4};
    int n=nums.size();
    //brute(nums,n);
    //better(nums,n);
    optimal(nums,n);
}