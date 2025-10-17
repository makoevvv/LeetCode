class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        for (int i = 2; i < n - 1; i++) {
            int cur_n = n;
            string str;
            while (cur_n) {
                str += char(int('0') + cur_n % i);
                cur_n /= i;
            }
            int l = 0, r = str.size() - 1;
            while (r > l) {
                if (str[l] != str[r]) {
                    return false;
                }
                l++;
                r--;
            }
        }
        return true;
    }
};