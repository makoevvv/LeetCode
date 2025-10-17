class Solution {
public:
    string addStrings(string num1, string num2) {
        if (num1.size() > num2.size()) {
            swap(num1, num2);
        }
        int k = 0, dif = num2.size() - num1.size();
        for (int i = num1.size() - 1; i >= 0; i--) {
            k += int(num1[i]) + int(num2[i + dif]) - int('0') * 2;
            num2[i + dif] = char(int('0') + (k % 10));
            k /= 10;
            cout << num2[i + dif];
        }
        for (int i = dif - 1; i >= 0; i--) {
            k += int(num2[i]) - int('0');
            num2[i] = char(int('0') + (k % 10));
            k /= 10;
        }
        if (k) {
            num2 = to_string(k) + num2;
        }
        return num2;

    }
};