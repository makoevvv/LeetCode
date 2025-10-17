class Solution {
public:
    void foo(vector<vector<int>>& matrix, int index) {
        vector <int> vec;
        if (index < matrix.size()) {
            vec = matrix[index];
            foo(matrix, index + 1);

            for (int i = 0; i < matrix.size(); i++) {
                matrix[i][vec.size() - index - 1] = vec[i];
            }
        } 
        
    }
    void rotate(vector<vector<int>>& matrix) {
        foo(matrix, 0);
    }
};