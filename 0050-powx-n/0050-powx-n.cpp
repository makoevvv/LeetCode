class Solution {
public:
    double myPow(double x, long long n) {

        if (n == 0) {
            return 1;
        }
        if (n < 0) {
            n *= -1;
            x = 1 / x;
        }
        if (n == 1) {
            return x;
        } else {
            double k = myPow(x, n / 2);
            if (n % 2) {
                return k * k * x;
            } else {
                return k * k;
            }
        }
    }
};