#include<bits/stdc++.h>
using namespace std;

int nin(int ind,int last,int arr[][3]){
  int maxi=0;
  if(ind==0){
   
    for(int i=0;i<3;i++){
      if(i!=last){
        maxi=max(maxi,arr[0][i]);
      }
    }
    return maxi;
  }
  maxi=0;
  for(int i=0;i<3;i++){
    if(i!=last){
      int task=arr[ind][i]+nin(ind-1,i,arr);
      maxi=max(maxi,task);
    }

  }
  return maxi;

}

int main(){
  int n;
  cin>>n;
  int arr[n][3];
  for(int i=0;i<n;i++){
    for(int j=0;j<3;j++){
      cin>>arr[i][j];
    }
  }
  cout<<nin(n-1,3,arr);

}