#include<iostream>
#include<vector>
using namespace std;

class Solution {
public:
    void getAllCombinations(vector<int>& arr, int idx, int target, vector<vector<int>>& ans, vector<int>& combin) {
        if (target == 0) {
            ans.push_back(combin);
            return;
        }
        if (idx == arr.size() || target < 0) {
            return;
        }

        // include current element
        combin.push_back(arr[idx]);
        getAllCombinations(arr, idx, target - arr[idx], ans, combin);  // allow reuse
        combin.pop_back();  // backtrack

        // move to next element
        getAllCombinations(arr, idx + 1, target, ans, combin);
    }

    vector<vector<int>> combinationSum(vector<int>& arr, int target) {
        vector<vector<int>> ans;
        vector<int> combin;
        getAllCombinations(arr, 0, target, ans, combin);
        return ans;
    }
};

int main() {
    Solution s;
    vector<int> arr = {2,3,6,7};
    int target = 7;

    vector<vector<int>> result = s.combinationSum(arr, target);

    cout << "Combinations that sum to " << target << ":\n";
    for (int i = 0; i < result.size(); i++) {
        cout << "[ ";
        for (int j = 0; j < result[i].size(); j++) {
            cout << result[i][j] << " ";
        }
        cout << "]\n";
    }

    return 0;
}
