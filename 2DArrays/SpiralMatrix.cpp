#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& mat) {
        int m = mat.size(), n = mat[0].size();
        int srow = 0, scol = 0, erow = m - 1, ecol = n - 1;
        vector<int> ans;

        while (srow <= erow && scol <= ecol) {
            // top row
            for (int j = scol; j <= ecol; j++) {
                ans.push_back(mat[srow][j]);
            }

            // right col
            for (int i = srow + 1; i <= erow; i++) {
                ans.push_back(mat[i][ecol]);
            }

            // bottom row (only if more than 1 row left)
            if (srow < erow) {
                for (int j = ecol - 1; j >= scol; j--) {
                    ans.push_back(mat[erow][j]);
                }
            }

            // left col (only if more than 1 col left)
            if (scol < ecol) {
                for (int i = erow - 1; i > srow; i--) {
                    ans.push_back(mat[i][scol]);
                }
            }

            srow++;
            erow--;
            scol++;
            ecol--;
        }

        return ans;  // ✅ fixed missing return
    }
};

int main() {
    int m, n;
    cout << "Enter rows and columns: ";
    cin >> m >> n;

    vector<vector<int>> mat(m, vector<int>(n));
    cout << "Enter elements of the matrix:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cin >> mat[i][j];
        }
    }

    Solution sol;
    vector<int> result = sol.spiralOrder(mat);

    cout << "Spiral order traversal: ";
    for (int val : result) {
        cout << val << " ";
    }
    cout << endl;

    return 0;
}
