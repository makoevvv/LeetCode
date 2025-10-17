class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        int ans = 0, curStart = timeSeries[0];
        for (int i = 0; i < timeSeries.size() - 1; i++) {
            if (timeSeries[i + 1] - timeSeries[i] > duration) {
                ans += timeSeries[i] + duration - curStart;
                curStart = timeSeries[i + 1];
            }
        }
        ans += timeSeries[timeSeries.size() - 1] + duration - curStart;
        return ans;
    }
};