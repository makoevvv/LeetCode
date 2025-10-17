class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int minX = INT_MAX, minY= INT_MAX;
        for (auto i: ops) {
            minX = min(minX, i[0]);
            minY= min(minY, i[1]);
        }
        if (minX == INT_MAX || minY == INT_MAX) {
            return m * n;
        }
        return minX * minY;
    }
};