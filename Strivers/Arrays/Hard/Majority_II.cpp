#include<bits/stdc++.h>
using namespace std;

void m1(vector<int> &nums,int n){
    //this code works but it prints the duplicates also , sc=O(1),TC=O(N^2)
    int check=n/3;
    int index=0;
    for(int i=0;i<n;i++){
        int cnt=1;
        for(int j=i+1;j<n;j++){
            if(nums[i]==nums[j]){
                cnt++;
            }
        }
        if(cnt>check){
            nums[index]=nums[i];
            index++;
        }
    }
    for(int i=index;i<n;i++){
        nums.erase(nums.begin()+index);
    }
    for(auto it:nums){
        cout<<it<<" ";
    }

}

void brute(vector<int> &nums,int k){
    vector<int> final;
    for(int i=0;i<k;i++){
        int cnt=1;
        if(final.size()==0 || final[0]!=nums[i]){
            for(int j=i+1;j<k;j++){
                if(nums[j]==nums[i]){
                    cnt++;
                }
            }
            if(cnt>k/3){
                final.push_back(nums[i]);
            }
        }
    }
    for(auto it:final){
        cout<<it<<" "; 
    }
}

void better(vector<int> &nums,int n){
    //TC=O(N) * logn(since using map function which takes logn timecomplexity if you take unordered map it will be O(1) but worst will be n^2 so careful)and space complexity will be size of map taken
    map<int,int> mp;
    for(int i=0;i<n;i++){
        mp[nums[i]]+=1;
        if(mp[nums[i]]==n/3+1){
            cout<<nums[i]<<" ";
        }

    }
    
}

void optimal(vector<int> &nums,int n){
    //i.e avoiding spacecomplexity makes the code optimal
    int c1,c2,e1,e2;
    for(int i=0;i<n;i++){
        if(c1==0 && nums[i]!=e2){
            c1++;
            e1=nums[i];
        }
        else if(c2==0 && nums[i]!=e1){
            c2++;
            e2=nums[i];
        }
        else if(nums[i]==e1){
            c1++;
        }
        else if(nums[i]==e2){
            c2++;
        }
        else{
            c1--;
            c2--;
        }
    }
    cout<<e1<<" "<<e2;
}

int main(){
    vector<int> nums={1,1,1,1,3,2,2,2};
    int n=nums.size();
    //brute(nums,n);
    better(nums,n);
}