#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int binSearch(vector<int>& arr, int tar, int st, int end) {
        if (st <= end) {
            int mid = st + (end - st) / 2;
            if (arr[mid] == tar) return mid;
            else if (arr[mid] < tar) {
                return binSearch(arr, tar, mid + 1, end);
            } else {
                return binSearch(arr, tar, st, mid - 1); // ✅ fixed (was mid+1)
            }
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        return binSearch(nums, target, 0, nums.size() - 1); // ✅ fixed (added return)
    }
};

int main() {
    Solution sol;
    vector<int> nums = {1, 3, 5, 7, 9, 11};
    int target;
    cout << "Enter target: ";
    cin >> target;

    int index = sol.search(nums, target);
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}
