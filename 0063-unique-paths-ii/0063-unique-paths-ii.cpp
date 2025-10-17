class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();
        vector <vector <int> > matrix(m, vector <int> (n));
        if (obstacleGrid[0][0] == 1) {
            return 0;
        }
        matrix[0][0] = 1;
        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {
                if (i == 0 && j == 0) {
                    continue;
                }
                if (obstacleGrid[i][j]) {
                    obstacleGrid[i][j] = 0;
                    continue;
                }
                if (i == 0) {
                    matrix[i][j] = matrix[i][j - 1];
                } else if (j == 0) {
                    matrix[i][j] = matrix[i - 1][j];
                } else {
                    matrix[i][j] = matrix[i - 1][j] + matrix[i][j - 1];
                }
            }
        }
        return matrix[m - 1][n - 1];
    }
};