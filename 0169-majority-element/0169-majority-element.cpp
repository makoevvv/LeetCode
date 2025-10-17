class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        if (n == 1) {
            return nums[0];
        }
        if (n % 2 == 1){
            return nums[(n - 1) / 2];
        } else {
            if (nums[n / 2] == nums[0]) {
                return nums[n / 2];
            } else {
                return nums[n / 2 + 1];
            }
        }      
    }
};