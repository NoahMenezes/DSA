#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    bool searchInRow(vector<vector<int>>& mat, int target, int row) {
        int n = mat[0].size();
        int st = 0, end = n - 1;

        while (st <= end) {
            int mid = st + (end - st) / 2;
            if (target == mat[row][mid]) {
                return true;
            } else if (target > mat[row][mid]) {
                st = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        return false;
    }

    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size(), n = mat[0].size();

        int startRow = 0, endRow = m - 1;
        while (startRow <= endRow) {
            int midRow = startRow + (endRow - startRow) / 2;

            if (target >= mat[midRow][0] && target <= mat[midRow][n - 1]) {
                // Search inside this row
                return searchInRow(mat, target, midRow);
            } else if (target > mat[midRow][n - 1]) {
                // Move down
                startRow = midRow + 1;
            } else {
                // Move up
                endRow = midRow - 1;
            }
        }
        return false;
    }
};

int main() {
    int m, n, target;
    cout << "Enter number of rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> matrix(m, vector<int>(n));
    cout << "Enter elements of the matrix (row-wise, sorted row & col):" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << "Enter target value to search: ";
    cin >> target;

    Solution sol;
    if (sol.searchMatrix(matrix, target)) {
        cout << "Target found!" << endl;
    } else {
        cout << "Target not found!" << endl;
    }

    return 0;
}
