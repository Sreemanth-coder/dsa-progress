#include<bits/stdc++.h>
using namespace std;

void brute(vector<int> &nums,int k){
    int n=nums.size();
    for(int i=0;i<n;i++){
        int res=0;
        for(int j=i;j<n;j++){
            res=res^nums[j];
            if(res==k){
                for(int l=i;l<=j;l++){
                    cout<<nums[l];
                }
                cout<<endl;
            }
        }
    }

}
void optimal(vector<int> &nums,int k){
    int cnt=0;
    int n=nums.size();
    map<int,int> mp;
    int res=0;
    for(int i=0;i<n;i++){
       
        res=res^nums[i];
        if(res==k){
            cnt++;
        }
        int rem=k-res;
        if(mp.find(rem)!=mp.end()){
            res=res^rem;
            cnt++;
        }
        if(mp.find(res)==mp.end()){
            mp[res]=i;
        }

    }
    cout<<cnt;

}


int main(){
    vector<int> nums={4, 2, 2, 6, 4};
    int k=6;
    //brute(nums,k);
    optimal(nums,k);
}
