class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                for (int j = i + 1; j < n - 1; j++) {
                    nums[j] = nums[j + 1];
                }
                n--;
            }
            if (nums[i] == nums[i + 1]){
                i--;
            }
        }
        return n;
        
    }
};