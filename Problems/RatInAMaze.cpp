#include<iostream>
#include<vector>
using namespace std;

void helper(vector<vector<int>>& mat, int r, int c, string path, vector<string>& ans, vector<vector<bool>>& vis){
    int n = mat.size();
    // boundary and invalid checks
    if(r<0 || c<0 || r>=n || c>=n || mat[r][c]==0 || vis[r][c]){
        return;
    }

    // reached destination
    if(r==n-1 && c==n-1){
        ans.push_back(path);
        return;
    }

    vis[r][c] = true; // mark visited

    // move in all 4 directions
    helper(mat, r+1, c, path+"D", ans, vis); // down
    helper(mat, r-1, c, path+"U", ans, vis); // up
    helper(mat, r, c-1, path+"L", ans, vis); // left
    helper(mat, r, c+1, path+"R", ans, vis); // right

    vis[r][c] = false; // backtrack
}

vector<string> findPath(vector<vector<int>>& mat){
    int n = mat.size();
    vector<string> ans;
    string path = "";
    vector<vector<bool>> vis(n, vector<bool>(n, false));

    if(mat[0][0] == 1) // start only if entry is open
        helper(mat, 0, 0, path, ans, vis);

    return ans;
}

int main(){
    vector<vector<int>> mat = {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };

    vector<string> paths = findPath(mat);

    cout << "All paths from (0,0) to (" << mat.size()-1 << "," << mat.size()-1 << "):\n";
    for(int i=0; i<paths.size(); i++){
        cout << paths[i] << endl;
    }

    return 0;
}
