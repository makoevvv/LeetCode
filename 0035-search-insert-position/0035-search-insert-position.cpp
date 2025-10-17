class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int ind = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == target) {
                return i;
            }
            if (target > nums[i]){
                ind = i;
            }
        }
        ind++;
        if (target < nums[0]) {
            ind = 0;
        }
        return ind;
    }
};