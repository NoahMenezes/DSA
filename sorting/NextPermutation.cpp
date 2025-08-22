#include <iostream>
#include <vector>
#include <algorithm> // for reverse
using namespace std;

// Next Permutation
class Solution {
public:
    void nextPermutation(vector<int>& A) {
        int pivot = -1;
        int n = A.size();

        // 1st step: find the pivot (rightmost element where A[i] < A[i+1])
        for (int i = n - 2; i >= 0; i--) {
            if (A[i] < A[i + 1]) {
                pivot = i;
                break;
            }
        }

        if (pivot == -1) { // if no pivot, array is descending → reverse
            reverse(A.begin(), A.end());
            return;
        }

        // 2nd step: find the next larger element to the right of pivot
        for (int i = n - 1; i > pivot; i--) {
            if (A[i] > A[pivot]) {
                swap(A[i], A[pivot]);
                break;
            }
        }

        // 3rd Step: reverse suffix (pivot+1 to end)
        reverse(A.begin() + pivot + 1, A.end());
    }
};

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution s;
    s.nextPermutation(arr);

    cout << "Next permutation: ";
    for (int x : arr) {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}
