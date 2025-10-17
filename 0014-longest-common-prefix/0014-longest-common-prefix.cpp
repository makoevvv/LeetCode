class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        map <string, int> pref;
        for (auto str: strs) {
            string pr;
            for (int i = 0; i < str.size(); i++) {
                pr += str[i];
                pref[pr]++;
            }
        }
        for (auto i: pref) {
            if (i.second == strs.size() && i.first.size() > ans.size()) {
                ans = i.first;
            }
        }
        return ans;
    }
};