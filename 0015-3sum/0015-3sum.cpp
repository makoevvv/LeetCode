class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        set <vector <int> > st;
        vector <vector <int> > ans;
        for (int i = 0; i < n; i++) {
            int l = i + 1;
            int r = n - 1;
            int cur = 0 - nums[i];
            while (l < r) {
                if (nums[l] + nums[r] > cur) {
                    r--;
                } else if (nums[l] + nums[r] < cur) {
                    l++;
                } else {
                    vector <int> curTriple(3);
                    curTriple[0] = nums[i];
                    curTriple[1] = nums[l];
                    curTriple[2] = nums[r];
                    if (st.find(curTriple) == st.end()) {
                        ans.push_back(curTriple);
                        st.insert(curTriple);
                    }
                    l++;
                    r--;
                }
            }
        }
            return ans;
    }
};