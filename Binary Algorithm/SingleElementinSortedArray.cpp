#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int singleNonDuplicate(vector<int>& A) {
        int n = A.size();

        if (n == 1) return A[0];
        int st = 0, end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (mid == 0 && A[0] != A[1]) return A[mid];
            if (mid == n - 1 && A[mid] != A[n - 2]) return A[mid];
            if (A[mid - 1] != A[mid] && A[mid] != A[mid + 1]) return A[mid];

            if (mid % 2 == 0) {  
                // even index
                if (A[mid] == A[mid - 1]) {
                    end = mid - 1;
                } else {
                    st = mid + 1;
                }
            } else {  
                // odd index
                if (A[mid] == A[mid - 1]) {
                    st = mid + 1;
                } else {
                    end = mid - 1;  // ✅ fixed from mid+1 to mid-1
                }
            }
        }
        return -1;
    }
};

int main() {
    Solution sol;

    // Example input (sorted, all elements appear twice except one)
    vector<int> arr = {1, 1, 2, 2, 3, 4, 4, 5, 5};

    int ans = sol.singleNonDuplicate(arr);

    if (ans != -1) {
        cout << "Single non-duplicate element is: " << ans << endl;
    } else {
        cout << "No single element found" << endl;
    }

    return 0;
}
