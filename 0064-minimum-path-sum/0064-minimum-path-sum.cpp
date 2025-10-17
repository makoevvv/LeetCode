class Solution {
public:
    int minPathSum(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector <vector <int> > matrix(m, vector <int> (n));
        matrix[0][0] = grid[0][0];
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) {
                    continue;
                }
                if (i == 0) {
                    matrix[i][j] = matrix[i][j - 1] + grid[i][j];
                } else if (j == 0) {
                    matrix[i][j] = matrix[i - 1][j] + grid[i][j];
                } else {
                    matrix[i][j] = min(matrix[i - 1][j], matrix[i][j - 1]) + grid[i][j];
                }
            }
        }
        return matrix[m - 1][n - 1];
    }
};