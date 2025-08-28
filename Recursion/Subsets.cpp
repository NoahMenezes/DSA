#include <iostream>
#include <vector>
using namespace std;
// O(n*2^n)
class Solution {
public:
    void getAllSubsets(vector<int>& nums, vector<int>& ans, int i, vector<vector<int>>& allSubsets) {
        if (i == nums.size()) {
            allSubsets.push_back(ans); // ✅ store subset
            return;
        }
        // include
        ans.push_back(nums[i]);
        getAllSubsets(nums, ans, i + 1, allSubsets);

        ans.pop_back();

        // exclude
        getAllSubsets(nums, ans, i + 1, allSubsets);
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> allSubsets;
        vector<int> ans;

        getAllSubsets(nums, ans, 0, allSubsets);
        return allSubsets; // ✅ return result
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 2, 3};
    
    vector<vector<int>> result = sol.subsets(nums);

    cout << "All subsets:\n";
    for (auto subset : result) {
        cout << "{ ";
        for (int val : subset) {
            cout << val << " ";
        }
        cout << "}\n";
    }

    return 0;
}
