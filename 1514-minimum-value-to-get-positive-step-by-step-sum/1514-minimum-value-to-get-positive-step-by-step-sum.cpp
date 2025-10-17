class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int min_val = 0, sum = 0;
        for (int i : nums) {
            sum += i;
            min_val = min(min_val, sum);
        }

        if (min_val >= 0) {
            return 1;
        } else {
            return 1 - min_val;
        }
        
    }
};