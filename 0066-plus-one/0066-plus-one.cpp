class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int k = 1;
        for (int i = digits.size() - 1; i >= 0; i--) {
            digits[i] += k;
            if (digits[i] > 9) {
                k = 1;
                digits[i] %= 10;
            } else {
                k = 0;
            }
        }
        if (k == 1) {
            digits.push_back(k);
            rotate(digits.rbegin(), digits.rbegin() + 1, digits.rend());
        }
        return digits;
    }
};