#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;
/*
void majority(vector<int> &arr){
    int i,j;
    int n=arr.size();
    int hash[12]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+1;
    }
    //repeation of digit 
  
}

*/
int main(){
    vector<int> arr={2,2,2,1};

    int i,j;
    int n=arr.size();
    int hash[12]={0};
    for(int i=0;i<n;i++){
        hash[arr[i]]+=1;
    }
    
    
    cout<<hash[2]; 
}