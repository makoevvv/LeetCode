class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map <char, int> mp;
        for (auto i: s){
            mp[i] = -1;
        }
        int start = 0, ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (mp[s[i]] != -1) {
                
                for (; start <= mp[s[i]]; start++) {
                    mp[s[start]] = -1;
                }
                mp[s[i]] = i;
                ans = max(ans, i - start + 1);
            } else {
                ans = max(ans, i - start + 1);
                mp[s[i]] = i;
            }
        }
        return ans;
    }
};