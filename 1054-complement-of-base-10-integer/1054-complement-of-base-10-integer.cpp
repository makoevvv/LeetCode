class Solution {
public:
    int bitwiseComplement(int n) {
        if (n == 0) {
            return 1;
        }
        vector <int> vec;
        while (n != 0) {
            vec.push_back(n % 2);
            n /= 2;
        }
        for (int i = 0; i < vec.size(); i++) {
            if (vec[i] == 0) {
                vec[i] = 1;
            } else {
                vec[i] = 0;
            }
        }
        for (int i = vec.size() - 1; i >= 0; i--) {
            if (vec[i] == 1) {
                vec.resize(max(0, i + 1));
                break;
            }
        }

        if (vec.size() == 0) {
            return 0;
        } else {
            int ans = 0;
            for (int i = 0; i < vec.size(); i++) {
                ans += vec[i] * pow(2, i);
            }
            return ans;
        }
    }
};