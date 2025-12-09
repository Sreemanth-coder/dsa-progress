#include<bits/stdc++.h>
using namespace std;

void permute(vector<int>& nums, int start, vector<vector<int>>& result) {
    if (start == nums.size()) {
        result.push_back(nums);
        return;
    }

    for (int i = start; i < nums.size(); i++) {
        swap(nums[start], nums[i]);                     // Choose
        permute(nums, start + 1, result);               // Explore
        swap(nums[start], nums[i]);                     // Un-choose (backtrack)
    }
}

int main() {
    vector<int> nums = {1, 2, 3};
    sort(nums.begin(), nums.end()); // Optional: ensures lexicographical order
    vector<vector<int>> result;

    permute(nums, 0, result);

    // Print all permutations
    for (const auto& p : result) {
        for (int num : p) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}