class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int curSum = 0;
        for (int i = 0; i < k; i++) {
            curSum += nums[i];
        }
        cout << curSum << " ";
        double maxSum = curSum;
        for (int i = k; i < nums.size(); i++) {
            curSum += nums[i];
            curSum -= nums[i - k];
            maxSum = max(double(curSum), maxSum);
            cout << curSum << " ";
        }
        return maxSum / k;
    }
};