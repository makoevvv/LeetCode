class Solution {
public:
    bool checkPerfectNumber(int num) {
        if (num == 1) {
            return false;
        }
        int k = 1;

        for (int i = 2; i <= int(sqrt(num)); i++) {
            if (num % i == 0) {
                k += i + num / i;
            }
        }

        return k == num;
    }
};