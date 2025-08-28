#include <iostream>
#include <vector>
using namespace std;

void printSubsets(vector<int>& arr, vector<int>& ans, int i) {
    if (i == arr.size()) {
        for (int val : ans) {   // ✅ print subset (ans), not arr
            cout << val << " ";
        }
        cout << endl;
        return;
    }

    // include current element
    ans.push_back(arr[i]);
    printSubsets(arr, ans, i + 1);

    ans.pop_back(); // backtrack

    // exclude current element
    printSubsets(arr, ans, i + 1);
}

int main(void) {
    vector<int> arr = {1, 2, 3};
    vector<int> ans; // store subsets

    printSubsets(arr, ans, 0);
    return 0;
}
