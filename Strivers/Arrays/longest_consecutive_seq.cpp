#include<bits/stdc++.h>
using namespace std;

bool ls(vector<int> &nums,int num){
    for(int i=0;i<nums.size();i++){
        if(nums[i]==num){
            return true;
        }
        
    }
    return false;

}
void naive(vector<int> &nums){
    //Close to O(N^2) TC
    int n=nums.size();
    int longest=1;
    for(int i=0;i<n;i++){
        int x=nums[i];
        int cnt=1;
        while(ls(nums,x+1)==true){
                x=x+1;
                cnt=cnt+1;
            }
        longest=max(longest,cnt);
    }
        
    cout<<longest;

}
    






void better(vector<int> &nums){
    //Takes O(nlogn) complexity 
    int n=nums.size();
    int longest=1;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        pq.push(nums[i]);

    }
    int cnt=1;
    for(int i=0;i<n;i++){
        int check=pq.top();
        pq.pop();
        if(pq.top()==check-1){
            cnt++;
        }
        else if(pq.top()==check){
            cnt=cnt+0;
        }
        else{
            cnt=1;
        }
        longest=max(longest,cnt);

    }
    cout<<longest;
    
}

void optimal(vector<int> &nums){
    unordered_set<int> st;
    int n=nums.size();
    if(n==0){
        cout<<0;
    }
    int longest=1;

    for(int i=0;i<n;i++){
        st.insert(nums[i]);
    }
    int cnt=0;
    for(auto it:st){
        if(st.find(it-1)==st.end()){
            int cnt=1;
            int x=it;
            while(st.find(x+1)!=st.end()){
                x=x+1;
                cnt++;
            }
            longest=max(longest,cnt);
        }

    }
    
    cout<<longest;

}


int main(){
    vector<int> nums={};
    //naive(nums);
    //better(nums);
    optimal(nums);
}