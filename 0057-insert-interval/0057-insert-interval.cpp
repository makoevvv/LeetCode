class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        intervals.push_back(newInterval);
        sort(intervals.begin(), intervals.end());
        int cur_start = intervals[0][0];
        int cur_end = intervals[0][1];
        for (int i = 1; i < intervals.size(); i++) {

            if (intervals[i][0] <= cur_end) {
                if (cur_end < intervals[i][1]) {
                    cur_end = intervals[i][1];
                }
            } else {
                ans.push_back(vector<int> {cur_start, cur_end});
                cur_start = intervals[i][0];
                cur_end = intervals[i][1];
            }
        }
        ans.push_back(vector<int> {cur_start, cur_end});
        return ans;
    }
};