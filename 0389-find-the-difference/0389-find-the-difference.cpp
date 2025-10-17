class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map <char, int> mp;

        for (int i = 0; i < s.size(); i++) {
            mp[s[i]]++;
        }
        for (int i = 0; i < t.size(); i++) {
            if (mp.find(t[i]) == mp.end()) {
                return t[i];
            } else if (mp[t[i]] > 0) {
                mp[t[i]]--;
            } else {
                return t[i];
            }
        }
        return ' ';
    }
};