#include <iostream>
using namespace std;

bool linearSearch(int mat[][3], int rows,int cols,  int key) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols ; j++) {
            if (mat[i][j] == key) {
                return true;
            }
        }
    }
    return false;
}

int main() {
    int rows = 4, cols = 3;
    int matrix[rows][cols]={{1,2,3}, {4,5,6}, {7,8,9}, {10,11,12}};

    cout << linearSearch(matrix, rows,cols, 20)<< endl;

    return 0;
}
