#include<bits/stdc++.h>
using namespace std;

void Single_number(vector<int> nums){
    //hashing doesnt work if the array contain negative numbers
    /*
    //Better soln but not optimal can be obtained by using map ds
    map<int,int> mp;
    for(int i=0;i<nums.size();i++){
        mp[nums[i]]+=1;
    }
    for(auto it:mp){
        if(it.second==1){
            return it.first;

        }
    }
    return 0;
    */
   //Using xor method gives optimal time complexity
   int Xor=0;
   for(int i=0;i<nums.size();i++){
    Xor=Xor^nums[i];
   }
   cout<<Xor;

}


int main(){
    vector<int> nums={2,2,1,2,2,3,3,3,3};
    Single_number(nums);

}