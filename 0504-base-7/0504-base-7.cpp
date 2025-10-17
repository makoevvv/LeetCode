class Solution {
public:
    string convertToBase7(int num) {
        string ans;
        bool k = false;
        if (num < 0) {
            k = true;
            num *= -1;
        }
        while (num != 0) {
            ans = to_string(num % 7) + ans;
            num /= 7;
        }
        if (!ans.size()) {
            ans = "0";
        }
        if (k) {
            ans = '-' + ans;
        }
        return ans;
    }
};