class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        if (nums.size() > 1) {
            bool flag = true;
            for (int i = nums.size() - 1; i > 0; i--) {
                if (nums[i - 1] < nums[i]) {
                    for (int j = nums.size() - 1; j >= i; j--) {
                        cout << nums[j] << " ";
                        if (nums[j] > nums[i - 1]) {
                            swap(nums[j], nums[i - 1]);
                            break;
                        }
                    }
                    sort(nums.begin() + i, nums.end());
                    flag = false;
                    break;
                }
            }
            if (flag) {
                sort(nums.begin(), nums.end());
            }
        }
    }
};