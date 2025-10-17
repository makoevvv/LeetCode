class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        long long t = target;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set <vector <int> > st;
        vector <vector <int> > ans;
        for (int j = 0; j < n - 3; j++) {
            for (int i = j + 1; i < n - 2; i++) {
                int l = i + 1;
                int r = n - 1;
                while (l < r) {
                    long long curSum = nums[l];
                    curSum += nums[r];
                    curSum += nums[i];
                    curSum += nums[j];
                    if (curSum - t > 0) {
                        r--;
                    } else if (curSum - t < 0) {
                        l++;
                    } else {
                        vector <int> cur(4);
                        cur[0] = nums[j];
                        cur[1] = nums[i];
                        cur[2] = nums[l];
                        cur[3] = nums[r];
                        if (st.find(cur) == st.end()) {
                            ans.push_back(cur);
                            st.insert(cur);
                        }
                        l++;
                        r--;
                    }
                }
            }
        }
        return ans;
    }
};