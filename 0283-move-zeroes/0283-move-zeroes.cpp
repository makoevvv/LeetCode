class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int cnt = 0;
        for (size_t i = 0; i < nums.size(); i++) {
            cout << "A";
            if (nums[i] == 0) {
                cnt++;
            } else {
                nums[i - cnt] = nums[i];
            }
        }
        if (cnt != nums.size()) {
            int n = 0 > (nums.size() - cnt) ? 0 : (nums.size() - cnt);
            for (size_t i = nums.size() - 1; i >= n; i--) {
                nums[i] = 0;
            }
        }
    }
};