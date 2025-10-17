class Solution {
public:
    bool checkLen(int n) {
        int cnt = 0;
        while (n != 0 && cnt < 2) {
            n /= 10;
            cnt++;
        }
        if (cnt < 2) {
            return true;
        } 
        return false;
    }
    int addDigits(int num) {
        if (checkLen(num)) {
            return num;
        } else {
            int sum = 0;
            while (num != 0) {
                sum += num % 10;
                num /= 10;
            }
            return addDigits(sum);
        }
    }
};