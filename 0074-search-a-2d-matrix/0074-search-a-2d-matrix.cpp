class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l = 0, r = matrix.size();
        while(r - l > 1) {
            int mid = (r + l) / 2;
            if (matrix[mid][0] > target) {
                r = mid;
            } else if (matrix[mid][0] < target) {
                l = mid;
            } else {
                return true;
            }
        }
        int row = l;
        l = 0;
        r = matrix[row].size();
        
        while (r - l > 1) {
            int mid = (r + l) / 2;
            cout << l << " " << r << '|';
            if (matrix[row][mid] > target) {
                r = mid;
            } else if (matrix[row][mid] < target) {
                l = mid;
            } else {
                return true;
            }
        }
        if (matrix[row][l] == target) {
            return true;
        }

        return false;
    }
};