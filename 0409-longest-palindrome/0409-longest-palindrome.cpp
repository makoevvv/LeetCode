class Solution {
public:
    int longestPalindrome(string s) {
        int ans = 0;
        unordered_map <char, int> mp;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        bool flag = false;
        for (auto i: mp) {
            if (i.second % 2 == 0) {
                ans += i.second;
            } else {
                ans += i.second - 1;
                flag = true;
            }
        }
        if (flag) {
            ans++;
        }
        return ans;
    }
};