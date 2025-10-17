class Solution {
public:
    string addBinary(string a, string b) {
        if (b.size() < a.size()) {
            swap(a, b);
        }

        string res;

        int k = 0;

        for (int i = a.size() - 1; i >= 0; i--) {
            bool x = a[i] == '1';
            bool y = b[i + b.size() - a.size()] == '1';
            if (x ^ y) {
                if (k) {
                    res = '0' + res;
                    k = 1;
                } else {
                    res = '1' + res;
                    k = 0;
                }
            } else if (x && y) {
                if (k) {
                    res = '1' + res;
                } else {
                    res = '0' + res;
                }
                k = 1;
            } else {
                if (k) {
                    res = '1' + res;
                } else {
                    res = '0' + res;
                }
                k = 0;
            }
        }
        for (int i = b.size() - a.size() - 1; i >= 0 ; i--) {
            if (b[i] == '0') {
                if (k) {
                    res = '1' + res;
                } else {
                    res = '0' + res;
                }
                k = 0;
            } else {
                if (k) {
                    res = '0' + res;
                    k = 1;
                } else {
                    res = '1' + res;
                    k = 0;
                }
            }
        }
        if (k) {
            res = '1' + res;
        }
        return res;
    }
};