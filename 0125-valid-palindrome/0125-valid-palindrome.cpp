class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;
        while (l <= r) {
            if (!isalpha(s[l]) && !isdigit(s[l])) {
                l++;
            }
            if (!isalpha(s[r]) && !isdigit(s[r])) {
                r--;
            }
            if((isalpha(s[l]) || isdigit(s[l])) && (isalpha(s[r]) || isdigit(s[r]))) {
                bool a = isdigit(s[l]);
                if (a) {
                    if (s[l] != s[r]) {
                        return false;
                    }
                } else if (toupper(s[l]) != toupper(s[r])) {
                    return false;
                }
                l++;
                r--;
            }
            
        }
        return true;
    }
};