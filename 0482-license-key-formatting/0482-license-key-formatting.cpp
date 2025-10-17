class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string cur;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z' || s[i] >= '0' && s[i] <= '9') {
                cur += s[i];
            } else if (s[i] >= 'a' && s[i] <= 'z') {
                cur += toupper(s[i]);
            }
        }
        string result;
        int cnt = 0;
        for (int i = cur.size() % k; i < cur.size(); i++) {
            if (k == 1) {
                if (i > 0) {
                    result += '-';
                }
                result += cur[i];
            } else if (cnt == k && i != cur.size() - 1) {   
                result += '-';
                result += cur[i];
                cnt = 1;
            } else {
                result += cur[i];
                cnt++;
            }

        }
        if (cur.size() % k != 0) {
            if (result.size() > 0) {
                result = '-' + result;
            }
            for (int i = cur.size() % k - 1; i >= 0; i--) {
                result = cur[i] + result;
            }
        }
        return result;
    }
};