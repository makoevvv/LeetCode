class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] == val) {
                for (int j = i; j < n - 1; j++) {
                    nums[j] = nums[j + 1];
                }
                n--;
            }
            if (nums[i] == val){
                i--;
            }

        }   
        if (nums.size() > 0){ 
            if (nums[n - 1] == val) {
                n--;
            }
        }
        return n;
    }
};