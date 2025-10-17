class Solution {
public:
    int myAtoi(string s) {
        bool neg = false;
        int flag = 0;
        long long ans = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= '0' && s[i] <= '9' && (flag == 0 || flag == 1)) {
                ans *= 10;
                ans += int(s[i]) - int('0');
                flag = 1;
                if (ans > INT_MAX) {
                    if (neg) {
                        return INT_MIN;
                    } else {
                        return INT_MAX;
                    }
                } 
            }else if (flag == 0 && s[i] == '-') {
                flag = 1;
                neg = true;
            }else if (flag == 0 && s[i] == '+') {
                flag = 1;
            } else {
                if (s[i] == ' ' && flag == 1){
                    break;
                } else if (s[i] != ' '){
                    break;
                }
            }
        }
        if (neg) {
            ans *= -1;
        }
        return ans;

    }
};