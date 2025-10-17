class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector <int> pref(nums.size(), 1), post(nums.size(), 1);
        pref[0] = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            pref[i] = pref[i - 1] * nums[i];
        }
        post[nums.size() - 1] = nums[nums.size() - 1];
        for (int i = nums.size() - 2; i >= 0; i--) {
            post[i] = post[i + 1] * nums[i];
        }

        vector <int> ans(nums.size(), 0);
        ans[0] = post[1];
        ans[nums.size() - 1] = pref[nums.size() - 2];
        for (int i = 1; i < nums.size() - 1; i++) {
            ans[i] = pref[i - 1] * post[i + 1];
        }

        return ans;
    }
};