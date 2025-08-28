#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    void getPerms(vector<int>& nums, int idx, vector<vector<int>>& ans) {
        if (idx == nums.size()) {   // ✅ base case
            ans.push_back(nums);    // store one permutation
            return;
        }

        for (int i = idx; i < nums.size(); i++) {
            swap(nums[idx], nums[i]);                // choose
            getPerms(nums, idx + 1, ans);            // explore
            swap(nums[idx], nums[i]);                // backtrack
        }
    }

    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>> ans;
        getPerms(nums, 0, ans);
        return ans;
    }
};

int main(void) {
    Solution sol;
    vector<int> nums = {1, 2, 3};

    vector<vector<int>> result = sol.permute(nums);

    cout << "All permutations:\n";
    for (auto& perm : result) {
        cout << "{ ";
        for (int val : perm) {
            cout << val << " ";
        }
        cout << "}\n";
    }

    return 0;
}
