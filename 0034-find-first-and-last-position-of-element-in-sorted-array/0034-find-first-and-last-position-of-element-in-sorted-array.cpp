class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {

        vector <int> vc(2, -1);
        if (nums.size() == 0) {
            return vc;
        }
        if (nums.size() == 1) {
            if (target == nums[0]) {
                vc[0] = 0;
                vc[1] = 0;
            }
            return vc;
        }
        int l = 0, r = nums.size() - 1;
        while (true) {
            if (r - l == 1) {
                break;
            }
            int mid = l + (r - l) / 2;
            if (nums[mid] < target) {
                l = mid;
            } else {
                r = mid;
            }
        }
        if (nums[r] == target) {
            vc[0] = r;
        }
        l = 0, r = nums.size() - 1;
        while (true) {
            if (r - l == 1) {
                break;
            }
            int mid = (l + r) / 2;
            if (nums[mid] > target) {
                r = mid;
            } else {
                l = mid;
            }
        }
        if (nums[l] == target) {
            vc[1] = l;
        }
        if (nums[0] == target) {
            if (vc[1] == -1) {
                vc[1] = 0;
            }
            vc[0] = 0;
        }
        if (nums[nums.size() - 1] == target) {
            if (vc[0] == -1) {
                vc[0] = nums.size() - 1;
            } 
            vc[1] = nums.size() - 1;
        }
        return vc;
    }
};