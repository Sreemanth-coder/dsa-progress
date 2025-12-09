#include<bits/stdc++.h>
using namespace std;


void m1(vector<int> &nums,int m){
  int n=nums.size();
  if(m>n){
    cout<<"Not Possible";
  }
  int rem=0;
  for(int i=0;i<(n-m+1);i++){
    rem+=nums[i];
  }
  for(int i=n-m+1;i<nums.size();i++){
    rem=max(rem,nums[i]);
  }
  cout<<rem;

}


void m2(vector<int> &nums,int m){
  int Max=0;
  int sum=0;
  for(int i=0;i<nums.size();i++){
    Max=max(nums[i],Max);
    sum+=nums[i];
  }
  for(int i=Max;i<sum;i++){
    int stu=0;
    int s=0;
    int maxi=0;
    for(int j=0;j<nums.size();j++){
      s+=nums[i];
      maxi=max(maxi,s);
      if(s<=i){
        stu++;
        
      }
      else{
        s=0;
        stu++;
        maxi=0;
      }

      
    }
    if(stu>m){
      continue;
    }
    else{
      cout<<i;
      break;
    }
  }

}

int allot(vector<int>&nums,int pages){
  int stud=1,stu_pages=0;
  for(int i=0;i<nums.size();i++){
    if(stu_pages+nums[i]<=pages){
      stu_pages+=nums[i];
    }
    else{
      stud++;
      stu_pages=nums[i];
    }
    
  }
  return stud;

}

void m3(vector<int> &nums,int m){
  int Max=0;
  int sum=0;
  for(int i=0;i<nums.size();i++){
    Max=max(Max,nums[i]);
    sum+=nums[i];
  }
  for(int i=Max;i<sum;i++){
    int n=allot(nums,i);
    if(n==m){
      cout<<i;
      break;
    }

  }
}

//using binarysearch
void m4(vector<int> &nums,int m){
  int low=0;
  int high=0;
  for(int i=0;i<nums.size();i++){
    low=max(low,nums[i]);
    high+=nums[i];
  }
  int result=high;
  while(low<=high){
    int mid=(low+high)/2;
    int n=allot(nums,mid);
    
    if(n<=m){
      result=mid;
      high=mid-1;;

    }
    else if(n>m){
      low=mid+1;
    }

  }
  cout<<result;

}
int main(){
  vector<int> nums={25, 46, 28, 49, 24};
  int m=4;
  m4(nums,m);
}