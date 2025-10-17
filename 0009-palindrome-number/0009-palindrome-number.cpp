class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0)
            return false;
        
        string s;
        while (x != 0) {
            s += char((int('0')) + x % 10);
            x /= 10;
        }

        int sz = s.size();

        for (int i = 0; i < (sz + 1) / 2; i++) {
            if (s[i] != s[sz - i - 1])
                return false;
        }

        return true;

    }
};