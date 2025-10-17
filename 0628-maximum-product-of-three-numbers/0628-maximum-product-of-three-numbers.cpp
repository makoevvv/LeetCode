class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());

        int l = nums[0];
        for (int i = 1; i < 3; i++) {
            l *= nums[i];
        }
        int r = nums[n - 1];
        for (int i = n - 2; i > n - 4; i--) {
            r *= nums[i];
        }
        int m = nums[0] * nums[1] * nums[n - 1];
        return max(l, max(m, r));
    }
};