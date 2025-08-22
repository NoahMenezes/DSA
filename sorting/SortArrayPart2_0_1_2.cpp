#include<iostream>
#include<vector>
using namespace std;
// Dutch National Flag Alogrithm

#include <iostream>
#include <vector>
using namespace std;

// Dutch National Flag Algorithm
class Solution {
public:
    void sortColors(vector<int>& nums) { // O(n)
        int n = nums.size();
        int low = 0, mid = 0, high = n - 1;

        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            } 
            else if (nums[mid] == 1) {
                mid++;
            } 
            else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
};

int main() {
    int n;
    cout << "Enter n: ";
    cin >> n;

    vector<int> arr(n);

    cout << "Enter the values of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution s;
    s.sortColors(arr);

    cout << "Sorted array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
