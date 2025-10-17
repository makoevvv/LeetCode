class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        set <int> rows;
        set <int> columns;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (matrix[i][j] == 0) {
                    rows.insert(i);
                    columns.insert(j);
                }
            }
        }
        for (auto i: rows) {
            for (int j = 0; j < m; j++) {
                matrix[i][j] = 0;
            }
        }
        for (auto j: columns) {
            for (int i = 0; i < n; i++) {
                matrix[i][j] = 0;
            }
        }
    }
};