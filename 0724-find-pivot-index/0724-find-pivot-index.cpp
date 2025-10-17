class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector <int> pref(nums.size()), post(nums.size());
        
        int prefsum = 0, postsum = 0;

        for (int i = 0; i < nums.size(); i++) {
            prefsum += nums[i];
            pref[i] = prefsum;
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            postsum += nums[i];
            post[i] = postsum;
        }

        for (int i = 0; i < nums.size(); i++) {
            if (pref[i] - nums[i] == post[i] - nums[i]) {
                return i;
            }
        }
        return -1;
    }
};