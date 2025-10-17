class Solution {
public:
    bool isPerfectSquare(int num) {
        if (num == 1) {
            return true;
        }
        long long l = 1, r = num;
        for (int i = 0; i < 33; i++) {
            if (((l + r) / 2) * ((l + r) / 2) == num) {
                return true;
            } else if (((l + r) / 2) * ((l + r) / 2) < num){
                l = (l + r) / 2;
            } else if (((l + r) / 2) * ((l + r) / 2) > num) {
                r = (l + r) / 2;
            }
        }
        return false;
    }
};