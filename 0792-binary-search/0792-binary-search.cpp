class Solution {
public:
    int search(vector<int>& nums, int target) {
        int l = 0, r = nums.size() - 1;

        while (r - l > 1) {
            cout << l << "_" << r << '|';
            int mid = (l + r) / 2;
            if (nums[mid] > target) {
                r = mid;
            } else if (nums[mid] < target) {
                l = mid;
            } else {
                return mid;
            }
        }

        if (nums[l] == target) {
            return l;
        } else if (nums[r] == target) {
            return r;
        } else {
            return -1;
        }
    }
};