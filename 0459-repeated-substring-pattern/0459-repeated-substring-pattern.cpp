class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        for (int k = 1; k < s.size(); k++) {
            if (s.size() % k == 0) {
                bool flag = true;
                for (int i = 0; i < k; i++) {
                    for (int j = i + k; j < s.size(); j += k) {
                        if (s[i] != s[j]) {
                            flag = false;
                            break;
                        }
                    }
                    if (!flag) {
                        break;
                    }
                }
                if (flag) {
                    return true;
                }
            }
        }
        return false;
    }
};