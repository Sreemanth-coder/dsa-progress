#include<bits/stdc++.h>
using namespace std;


bool isthere(vector<int>&minimals,int len){
  if(len==1) return false;
  for(int i=0;i<minimals.size();i++){
    if(len<minimals[i]){
      return false;
    }
    
  }
  return true;

}

void m1(vector<int> stalls,int k){
  sort(stalls.begin(),stalls.end());
  vector<int> minimals(stalls.size(),INT_MAX);
  int s=0;
  for(int i=0;i<stalls.size();i++){
    int min_dis=INT_MAX;
    for(int j=i+1;j<stalls.size();j++){
      int len=stalls[j]-stalls[i];
      if(len<=min_dis && isthere(minimals,len)){
        min_dis=len;
        
      }
    }
    
    minimals[s]=min_dis;
    s++;
    
  }
  for(auto num:minimals){
    cout<<num<<endl;
  }
  /*
  for(auto m:minimals){
    cout<<m.first<<" "<<m.second<<endl;
  }
  */
}

void m2(vector<int>&stalls,int k){
  sort(stalls.begin(),stalls.end());
  for(int d=1;d<=4;d++){
  int i=0,j=1,n=stalls.size();
  while(i<n && j<=n){
    if(stalls[i]+stalls[j]>d){
      i++;
      j++;
    }
    else{
      j++;
      if(stalls[i]+stalls[j]>d){
        
      }
    }
  }
}
}

bool can_place(vector<int> &stalls,int d,int cows){
  int count=1,last=stalls[0];
  for(int i=1;i<stalls.size();i++){
    if(stalls[i]-last>=d){
      count++;
      last=stalls[i];
    }
    if(count>=cows) return true;
  

  }
  
  return false;

}
void m3(vector<int> &stalls,int k){
  sort(stalls.begin(),stalls.end());
  int n=stalls.size();
  int low=0,high=stalls[n-1]-stalls[0];
  while(low<=high){
    int mid=(low+high)/2;
    if(can_place(stalls,mid,k)){
      low=mid+1;
    }
    else{
      high=mid-1;
    }
  }
  cout<<high;

}

int main(){
  vector<int> stalls={4, 2, 1, 3, 6};
  int k=2;
  m3(stalls,k);
 // m1(stalls,k);
}