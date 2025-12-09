#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n) {
    if (n <= 1) return false; // 0 and 1 are not prime
    if (n == 2 || n == 3) return true; // 2 and 3 are prime
    if (n % 2 == 0 || n % 3 == 0) return false;

    // check from 5 to sqrt(n)
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    }
    return true;
}

bool frequency(vector<int>& nums){
    map<int,int> mp;
    int n=nums.size();
    for(int i=0;i<n;i++){
        mp[nums[i]]+=1;
    }
    for(auto it:mp){
        int n=it.second;
        if(isPrime(n)){
            return true;

        }
    }
    return false;

}

int main(){
    vector<int> nums={2,2,2,4,4};
    cout<<frequency(nums);
}
