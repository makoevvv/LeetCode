class Solution {
public:
    int binSearch (int l, int r, vector<int> nums, int target) {
        int mid;
        if (r - l == 0) {
            if (nums[r] == target) {
                return r;
            }
            return -1;
        }
        while (true) {
            if (r - l == 1) {
                if (nums[r] == target) {
                    return r;
                }
                if (nums[l] == target) {
                    return l;
                }
                return -1;
            }
            mid = (l + r) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[mid] > target) {
                r = mid;
                continue;
            }
            if (nums[mid] < target) {
                l = mid;
            }
        }
        return -1;
    }
    int search(vector<int>& nums, int target) {
        if (nums.size() == 1) {
            if (nums[0] == target) {
                return 0;
            } else {
                return -1;
            }
        } else if (nums[0] < nums[nums.size() - 1]) {
            return binSearch(0, nums.size() - 1, nums, target);
        } else {
            int l = 0, r = nums.size() - 1, mid;
            while (true) {
                if (r - l == 1) {
                    break;
                } 
                mid = (r + l) / 2;
                if (nums[mid] < nums[l]) {
                    r = mid;
                    continue;
                } 
                if (nums[mid] > nums[r]) {
                    l = mid;
                }
            }
            return max (binSearch(0, l, nums, target), binSearch(r, nums.size() - 1, nums, target));
        }
        return 0;
    }
};