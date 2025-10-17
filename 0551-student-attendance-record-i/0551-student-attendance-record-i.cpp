class Solution {
public:
    bool checkRecord(string s) {
        int a = 0, l = 0;
        bool flag = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == 'A') {
                a++;
                if (a > 1) {
                    return false;
                }
                flag = false;
                l = 0;
            } else if (s[i] == 'L') {
                l++;
                flag = true;
                if (flag) {
                    if (l > 2) {
                        return false;
                    }
                }
            } else {
                l = 0;
                flag = false;
            }
        }
        return true;
    }
};