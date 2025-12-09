#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> Twosum(vector<int> &arr,int target){
    map<int,int> mpp;
    int n=arr.size();
    for(int i=0;i<n;i++){
        int num=arr[i];
        int more=target-num;
        if(mpp.find(more)!=mpp.end()){
            return {mpp[more],i};
        }
        mpp[num]=i;
    }

    return {-1,-1};



}

int main(){
    vector<int> arr={1,2,3};
    int n=3;
    vector<int> result=Twosum(arr,n);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;

}