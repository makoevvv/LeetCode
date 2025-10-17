class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());
        int ans = INT_MAX - abs(target);
        for (int i = 0; i < n; i++) {
            int l = i + 1;
            int r = n - 1;
            while (l < r) {
                if (nums[l] + nums[r] + nums[i] > target) {
                    cout << "a ";
                    if (abs(nums[l] + nums[r] + nums[i] - target) < abs(ans - target)) {
                        ans = nums[l] + nums[r] + nums[i];
                    }
                    r--;
                } else if (nums[l] + nums[r] + nums[i] < target) {
                    cout << "b ";
                    if (abs(nums[l] + nums[r] + nums[i] - target) < abs(ans - target)) {
                        ans = nums[l] + nums[r] + nums[i];
                    }
                    l++;
                } else {
                    if (abs(nums[l] + nums[r] + nums[i] - target) < abs(ans - target)) {
                        ans = nums[l] + nums[r] + nums[i];
                        cout << "c ";
                    } 
                    if (nums[l] + nums[r] + nums[i] == target) {
                        cout << "d ";
                        return target;
                    }
                    l++;
                    r--;
                }
            }
        }
        if (n == 3) {

        }
        return ans;
    }
};