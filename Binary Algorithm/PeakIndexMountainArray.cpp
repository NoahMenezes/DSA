#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int peakIndexInMountainArray(vector<int>& A) {
        int st = 0, end = A.size() - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            // prevent out-of-bounds
            if (mid > 0 && mid < A.size() - 1) {
                if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1]) {
                    return mid;
                } else if (A[mid - 1] < A[mid]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;
                }
            } else {
                break; // edge case: shouldn't happen for a proper mountain array
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;

    // Example mountain array
    vector<int> arr = {1, 3, 5, 7, 6, 4, 2};

    int peakIndex = sol.peakIndexInMountainArray(arr);

    if (peakIndex != -1) {
        cout << "Peak element " << arr[peakIndex] 
             << " found at index " << peakIndex << endl;
    } else {
        cout << "No peak found" << endl;
    }

    return 0;
}
