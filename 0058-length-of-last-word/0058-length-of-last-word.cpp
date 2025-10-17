class Solution {
public:
    int lengthOfLastWord(string s) {
        string str;
        int k = 0;
        for (size_t i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ') {
                break;
            } else {
                k++;
            }
        }
        s.resize(s.size() - k);
        for (size_t i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                str = "";
            } else {
                str += s[i];
            }
        }
        return str.size();
    }
};