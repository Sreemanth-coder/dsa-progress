#include <iostream>
#include <bits/stdc++.h>

using namespace std;

//Input: nums = [3,1,-2,-5,2,-4]
//Output: [3,-2,1,-5,2,-4]

void Sign(vector<int> &arr,int n){
        vector<int> temp(n);
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(arr[i]>0 && arr[j]<0){
                    temp.push_back(arr[i]);
                    temp.push_back(arr[j]);
                    arr.erase(arr[i],arr[j]);

                }
                else if(arr[i]<0 && arr[j]>0){
                    temp.push_back(arr[j]);
                    temp.push_back(arr[i]);
                }
            }
        }
}






int main(){
    int n;
    cin>>n;
    vector<int> arr(n)={4,5,-2,-3,9,-8};



}