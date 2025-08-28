#include<iostream>
#include<vector>
using namespace std;

class Solution{
public:
    bool isSafe(vector<string>& board, int row, int col, int n){
        // Horizontal & vertical
        for(int i=0;i<row;i++){
            if(board[i][col]=='Q') return false;
        }
        // left diagonal
        for(int i=row-1, j=col-1; i>=0 && j>=0; i--, j--){
            if(board[i][j]=='Q') return false;
        }
        // right diagonal
        for(int i=row-1, j=col+1; i>=0 && j<n; i--, j++){
            if(board[i][j]=='Q') return false;
        }
        return true;
    }

    void nQueens(vector<string>& board, int row, int n, vector<vector<string>>& ans){
        if(row==n){
            ans.push_back(board);
            return;
        }

        for(int col=0; col<n; col++){
            if(isSafe(board,row,col,n)){
                board[row][col]='Q';
                nQueens(board,row+1,n,ans);
                board[row][col]='.'; // backtrack
            }
        }
    }

    vector<vector<string>> solveNQueens(int n){
        vector<string> board(n,string(n,'.'));
        vector<vector<string>> ans;
        nQueens(board,0,n,ans);
        return ans;
    }
};

int main() {
    Solution sol;
    int n = 4;

    vector<vector<string>> solutions = sol.solveNQueens(n);

    cout << "Number of solutions: " << solutions.size() << "\n\n";

    for (int i = 0; i < solutions.size(); i++) {
        vector<string> board = solutions[i];
        for (int j = 0; j < board.size(); j++) {
            cout << board[j] << "\n";
        }
        cout << "\n";
    }

    return 0;
}
