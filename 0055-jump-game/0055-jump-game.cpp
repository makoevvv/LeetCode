class Solution {
public:
    bool canJump(vector<int>& nums) {
        vector <int> dp(nums.size(), 0);
        dp[0]++;
        for (int i = 0; i < nums.size(); i++) {
            if (dp[i]) {
                for (int j = i + 1; j <= min(i + nums[i], int(nums.size() - 1)); j++) {
                    dp[j]++;
                }
            }
        }
        return dp[nums.size() - 1] != 0;
    }
};