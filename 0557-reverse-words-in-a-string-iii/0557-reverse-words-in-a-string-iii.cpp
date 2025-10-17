class Solution {
public:
    string reverseWords(string s) {
        string curStr, ans;
        for (auto i : s) {
            if (i == ' ') {
                if (ans.size()) {
                    ans += " " + curStr;
                } else {
                    ans += curStr;
                }
                curStr = "";
            } else {
                curStr = i + curStr;
            }
        }
        if (ans.size()) {
            ans += " " + curStr;
        } else {
            ans += curStr;
        }
        return ans;
    }
};