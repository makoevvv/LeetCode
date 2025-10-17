class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n = nums.size();
        int ans = INT_MIN;
        for (int i = 0; i < n; i++) {
            int a = 0, b = 0, c = 1;
            for (int j = i + 1; j < n; j++) {
                if (nums[j] - nums[i] == 0) {
                    c++;
                } else if (nums[j] - nums[i] == 1) {
                    a++;
                } else if (nums[j] - nums[i] == -1) {
                    b++;
                }
            }
            if (a == 0 && b == 0){
                ans = max(ans, 0);
            } else {  
                ans = max(ans, max(a, b) + c);
            }
        }
        return ans;
    }
};