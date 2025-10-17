class Solution {
public:
    int arrangeCoins(int n) {
        int lastRow = 1, ans = 1;
        while (n >= lastRow) {
            n -= lastRow;
            ans = lastRow;
            lastRow++;
        }
        return ans;
    }
};