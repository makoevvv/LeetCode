class Solution {
public:
    int countSegments(string s) {
        if (s.size() == 0) {
            return 0;
        }
        bool k = false;
        int ans = 0;

        for (int i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                if (k) {
                    ans++;
                }
                k = false;
            } else {
                k = true;
            }
        }
        if (s[s.size() - 1] != ' ') {
            ans++;
        }
        return ans;
    }
};