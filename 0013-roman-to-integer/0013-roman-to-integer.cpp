class Solution {
public:
    int romanToInt(string s) {
        int ans = 0;
        map <char, int> nums;
        nums['I'] = 1;
        nums['V'] = 5;
        nums['X'] = 10;
        nums['L'] = 50;
        nums['C'] = 100;
        nums['D'] = 500;
        nums['M'] = 1000;
        for (int i = 0; i < s.size() - 1; i++) {
            if (nums[s[i]] < nums[s[i + 1]]) {
                ans -= nums[s[i]];
            } else {
                ans += nums[s[i]];
            }
        }
        ans += nums[s[s.size() - 1]];
        return ans;
    }
};