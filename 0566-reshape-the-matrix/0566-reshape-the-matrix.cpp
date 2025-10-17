class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& mat, int r, int c) {
        int n = mat.size();
        int m = mat[0].size();
        
        if (n * m != r * c) {
            return mat;
        }
        int k = 0;
        vector<vector<int>> matrix(r, vector<int> (c));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                matrix[k/c][k%c] = mat[i][j];
                k++;
            }
        }
        return matrix;
    }
};