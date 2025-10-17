class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        cout << min(0, 1);

        for (int i = 0; i < nums.size(); i++) {
            int t = (i + k < nums.size() - 1) ? i + k : (nums.size() - 1);
            for (int j = i + 1; j <= t; j++){
                if (nums[i] == nums[j]){
                    return true;
                }
            }
        }
        return false;
    }
};