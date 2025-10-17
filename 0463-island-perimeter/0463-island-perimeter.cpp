class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == 1) {
                    if (i + 1 < n) {
                        if (grid[i + 1][j] == 0) {
                            ans++;
                        }
                    } else {
                        ans++;
                    }
                    if (i - 1 >= 0) {
                        if (grid[i - 1][j] == 0) {
                            ans++;
                        }
                    } else {
                        ans++;
                    }
                    if (j + 1 < m) {
                        if (grid[i][j + 1] == 0) {
                            ans++;
                        }
                    } else {
                        ans++;
                    }
                    if (j - 1 >= 0) {   
                        if (grid[i][j - 1] == 0) {
                            ans++;
                        }
                    } else {
                        ans++;
                    }
                }
            }
        }
        return ans;
    }
};