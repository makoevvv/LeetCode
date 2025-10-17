class Solution {
public:
    int titleToNumber(string columnTitle) {
        int ans = 0;
        int n = columnTitle.size();
        for (int i = n - 1; i >= 0; i--) {
            ans += (columnTitle[i] - 'A' + 1) * pow(26, n - i - 1);
        }
        return ans;
    }
};